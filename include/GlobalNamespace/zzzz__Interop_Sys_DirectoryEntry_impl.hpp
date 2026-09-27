#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_Sys_DirectoryEntry.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_NodeType_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_Sys_DirectoryEntry_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Sys_Interop_DirectoryEntry.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::GlobalNamespace::Sys_Interop_DirectoryEntry::*)(::System::Span_1<char16_t>)>(&::GlobalNamespace::Sys_Interop_DirectoryEntry::GetName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa10d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Sys_Interop_DirectoryEntry>(),
                        {"GetName", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<char16_t> GlobalNamespace::Sys_Interop_DirectoryEntry::GetName(::System::Span_1<char16_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Sys_Interop_DirectoryEntry>(),
                        {"GetName", {}, {::i2c::type_of<::System::Span_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "Name", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InodeType", ty: "::GlobalNamespace::Sys_Interop_NodeType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry::Sys_Interop_DirectoryEntry(uint8_t*  Name, int32_t  NameLength, ::GlobalNamespace::Sys_Interop_NodeType  InodeType) noexcept  {
this->Name = Name;
this->NameLength = NameLength;
this->InodeType = InodeType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry::Sys_Interop_DirectoryEntry()   {
}
