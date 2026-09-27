#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_ProcInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Diagnostics/zzzz__Process_ProcInfo_def.hpp"
// Ctor Parameters [CppParam { name: "process_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "envVariables", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Password", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Process_ProcInfo::Process_ProcInfo(::System::IntPtr  process_handle, int32_t  pid, ::ArrayW<::StringW>  envVariables, ::StringW  UserName, ::StringW  Domain, ::System::IntPtr  Password, bool  LoadUserProfile) noexcept  {
this->process_handle = process_handle;
this->pid = pid;
this->envVariables = envVariables;
this->UserName = UserName;
this->Domain = Domain;
this->Password = Password;
this->LoadUserProfile = LoadUserProfile;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Process_ProcInfo::Process_ProcInfo()   {
}
