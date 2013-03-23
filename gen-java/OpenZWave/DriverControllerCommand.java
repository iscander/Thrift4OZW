/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package OpenZWave;


import java.util.Map;
import java.util.HashMap;
import org.apache.thrift.TEnum;

/**
 * < A collection of bytes
 */
public enum DriverControllerCommand implements org.apache.thrift.TEnum {
  ControllerCommand_None(0),
  /**
   * < No command.
   */
  ControllerCommand_AddDevice(1),
  /**
   * < Add a new device or controller to the Z-Wave network.
   */
  ControllerCommand_CreateNewPrimary(2),
  /**
   * < Add a new controller to the Z-Wave network. Used when old primary fails. Requires SUC.
   */
  ControllerCommand_ReceiveConfiguration(3),
  /**
   * < Receive Z-Wave network configuration information from another controller.
   */
  ControllerCommand_RemoveDevice(4),
  /**
   * < Remove a device or controller from the Z-Wave network.
   */
  ControllerCommand_RemoveFailedNode(5),
  /**
   * < Move a node to the controller's failed nodes list. This command will only work if the node cannot respond.
   */
  ControllerCommand_HasNodeFailed(6),
  /**
   * < Check whether a node is in the controller's failed nodes list.
   */
  ControllerCommand_ReplaceFailedNode(7),
  /**
   * < Replace a non-responding node with another. The node must be in the controller's list of failed nodes for this command to succeed.
   */
  ControllerCommand_TransferPrimaryRole(8),
  /**
   * < Make a different controller the primary.
   */
  ControllerCommand_RequestNetworkUpdate(9),
  /**
   * < Request network information from the SUC/SIS.
   */
  ControllerCommand_RequestNodeNeighborUpdate(10),
  /**
   * < Get a node to rebuild its neighbour list.  This method also does RequestNodeNeighbors
   */
  ControllerCommand_AssignReturnRoute(11),
  /**
   * < Assign a network return routes to a device.
   */
  ControllerCommand_DeleteAllReturnRoutes(12),
  /**
   * < Delete all return routes from a device.
   */
  ControllerCommand_SendNodeInformation(13),
  /**
   * < Send a node information frame
   */
  ControllerCommand_ReplicationSend(14),
  /**
   * < Send information from primary to secondary
   */
  ControllerCommand_CreateButton(15),
  /**
   * < Create an id that tracks handheld button presses
   */
  ControllerCommand_DeleteButton(16);

  private final int value;

  private DriverControllerCommand(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static DriverControllerCommand findByValue(int value) { 
    switch (value) {
      case 0:
        return ControllerCommand_None;
      case 1:
        return ControllerCommand_AddDevice;
      case 2:
        return ControllerCommand_CreateNewPrimary;
      case 3:
        return ControllerCommand_ReceiveConfiguration;
      case 4:
        return ControllerCommand_RemoveDevice;
      case 5:
        return ControllerCommand_RemoveFailedNode;
      case 6:
        return ControllerCommand_HasNodeFailed;
      case 7:
        return ControllerCommand_ReplaceFailedNode;
      case 8:
        return ControllerCommand_TransferPrimaryRole;
      case 9:
        return ControllerCommand_RequestNetworkUpdate;
      case 10:
        return ControllerCommand_RequestNodeNeighborUpdate;
      case 11:
        return ControllerCommand_AssignReturnRoute;
      case 12:
        return ControllerCommand_DeleteAllReturnRoutes;
      case 13:
        return ControllerCommand_SendNodeInformation;
      case 14:
        return ControllerCommand_ReplicationSend;
      case 15:
        return ControllerCommand_CreateButton;
      case 16:
        return ControllerCommand_DeleteButton;
      default:
        return null;
    }
  }
}
