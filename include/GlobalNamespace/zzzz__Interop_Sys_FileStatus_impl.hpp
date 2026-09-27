#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_FileStatus.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatusFlags_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_FileStatus_def.hpp"
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::Sys_Interop_FileStatusFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Sys_Interop_FileStatus::Sys_Interop_FileStatus(::GlobalNamespace::Sys_Interop_FileStatusFlags  Flags, int32_t  Mode, uint32_t  Uid, uint32_t  Gid, int64_t  Size, int64_t  ATime, int64_t  ATimeNsec, int64_t  MTime, int64_t  MTimeNsec, int64_t  CTime, int64_t  CTimeNsec, int64_t  BirthTime, int64_t  BirthTimeNsec, int64_t  Dev, int64_t  Ino, uint32_t  UserFlags) noexcept  {
this->Flags = Flags;
this->Mode = Mode;
this->Uid = Uid;
this->Gid = Gid;
this->Size = Size;
this->ATime = ATime;
this->ATimeNsec = ATimeNsec;
this->MTime = MTime;
this->MTimeNsec = MTimeNsec;
this->CTime = CTime;
this->CTimeNsec = CTimeNsec;
this->BirthTime = BirthTime;
this->BirthTimeNsec = BirthTimeNsec;
this->Dev = Dev;
this->Ino = Ino;
this->UserFlags = UserFlags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_FileStatus::Sys_Interop_FileStatus()   {
}
