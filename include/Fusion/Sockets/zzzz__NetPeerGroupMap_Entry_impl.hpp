#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap_Entry.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_EntryState_impl.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "Next", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hash", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "State", ty: "::GlobalNamespace::NetPeerGroupMap_EntryState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetPeerGroupMap_Entry::NetPeerGroupMap_Entry(::GlobalNamespace::NetPeerGroupMap_Entry*  Next, uint64_t  Hash, ::GlobalNamespace::NetPeerGroupMap_EntryState  State, ::Fusion::Sockets::NetAddress  Address, int16_t  Group) noexcept  {
this->Next = Next;
this->Hash = Hash;
this->State = State;
this->Address = Address;
this->Group = Group;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetPeerGroupMap_Entry::NetPeerGroupMap_Entry()   {
}
