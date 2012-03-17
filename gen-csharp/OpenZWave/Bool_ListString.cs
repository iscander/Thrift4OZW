/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using Thrift.Protocol;
using Thrift.Transport;
namespace OpenZWave
{

  [Serializable]
  public partial class Bool_ListString : TBase
  {
    private bool _retval;
    private List<string> _o_value;

    public bool Retval
    {
      get
      {
        return _retval;
      }
      set
      {
        __isset.retval = true;
        this._retval = value;
      }
    }

    public List<string> O_value
    {
      get
      {
        return _o_value;
      }
      set
      {
        __isset.o_value = true;
        this._o_value = value;
      }
    }


    public Isset __isset;
    [Serializable]
    public struct Isset {
      public bool retval;
      public bool o_value;
    }

    public Bool_ListString() {
    }

    public void Read (TProtocol iprot)
    {
      TField field;
      iprot.ReadStructBegin();
      while (true)
      {
        field = iprot.ReadFieldBegin();
        if (field.Type == TType.Stop) { 
          break;
        }
        switch (field.ID)
        {
          case 1:
            if (field.Type == TType.Bool) {
              Retval = iprot.ReadBool();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 2:
            if (field.Type == TType.List) {
              {
                O_value = new List<string>();
                TList _list0 = iprot.ReadListBegin();
                for( int _i1 = 0; _i1 < _list0.Count; ++_i1)
                {
                  string _elem2 = null;
                  _elem2 = iprot.ReadString();
                  O_value.Add(_elem2);
                }
                iprot.ReadListEnd();
              }
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          default: 
            TProtocolUtil.Skip(iprot, field.Type);
            break;
        }
        iprot.ReadFieldEnd();
      }
      iprot.ReadStructEnd();
    }

    public void Write(TProtocol oprot) {
      TStruct struc = new TStruct("Bool_ListString");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (__isset.retval) {
        field.Name = "retval";
        field.Type = TType.Bool;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(Retval);
        oprot.WriteFieldEnd();
      }
      if (O_value != null && __isset.o_value) {
        field.Name = "o_value";
        field.Type = TType.List;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        {
          oprot.WriteListBegin(new TList(TType.String, O_value.Count));
          foreach (string _iter3 in O_value)
          {
            oprot.WriteString(_iter3);
          }
          oprot.WriteListEnd();
        }
        oprot.WriteFieldEnd();
      }
      oprot.WriteFieldStop();
      oprot.WriteStructEnd();
    }

    public override string ToString() {
      StringBuilder sb = new StringBuilder("Bool_ListString(");
      sb.Append("Retval: ");
      sb.Append(Retval);
      sb.Append(",O_value: ");
      sb.Append(O_value);
      sb.Append(")");
      return sb.ToString();
    }

  }

}
