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
  public partial class GetSwitchPointReturnStruct : TBase
  {
    private bool _retval;
    private byte _o_hours;
    private byte _o_minutes;
    private byte _o_setback;

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

    public byte O_hours
    {
      get
      {
        return _o_hours;
      }
      set
      {
        __isset.o_hours = true;
        this._o_hours = value;
      }
    }

    public byte O_minutes
    {
      get
      {
        return _o_minutes;
      }
      set
      {
        __isset.o_minutes = true;
        this._o_minutes = value;
      }
    }

    public byte O_setback
    {
      get
      {
        return _o_setback;
      }
      set
      {
        __isset.o_setback = true;
        this._o_setback = value;
      }
    }


    public Isset __isset;
    [Serializable]
    public struct Isset {
      public bool retval;
      public bool o_hours;
      public bool o_minutes;
      public bool o_setback;
    }

    public GetSwitchPointReturnStruct() {
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
            if (field.Type == TType.Byte) {
              O_hours = iprot.ReadByte();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 3:
            if (field.Type == TType.Byte) {
              O_minutes = iprot.ReadByte();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 4:
            if (field.Type == TType.Byte) {
              O_setback = iprot.ReadByte();
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
      TStruct struc = new TStruct("GetSwitchPointReturnStruct");
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
      if (__isset.o_hours) {
        field.Name = "o_hours";
        field.Type = TType.Byte;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        oprot.WriteByte(O_hours);
        oprot.WriteFieldEnd();
      }
      if (__isset.o_minutes) {
        field.Name = "o_minutes";
        field.Type = TType.Byte;
        field.ID = 3;
        oprot.WriteFieldBegin(field);
        oprot.WriteByte(O_minutes);
        oprot.WriteFieldEnd();
      }
      if (__isset.o_setback) {
        field.Name = "o_setback";
        field.Type = TType.Byte;
        field.ID = 4;
        oprot.WriteFieldBegin(field);
        oprot.WriteByte(O_setback);
        oprot.WriteFieldEnd();
      }
      oprot.WriteFieldStop();
      oprot.WriteStructEnd();
    }

    public override string ToString() {
      StringBuilder sb = new StringBuilder("GetSwitchPointReturnStruct(");
      sb.Append("Retval: ");
      sb.Append(Retval);
      sb.Append(",O_hours: ");
      sb.Append(O_hours);
      sb.Append(",O_minutes: ");
      sb.Append(O_minutes);
      sb.Append(",O_setback: ");
      sb.Append(O_setback);
      sb.Append(")");
      return sb.ToString();
    }

  }

}
