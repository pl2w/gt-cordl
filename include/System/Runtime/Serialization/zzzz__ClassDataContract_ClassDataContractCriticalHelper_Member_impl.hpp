#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataContract_ClassDataContractCriticalHelper_Member.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_ClassDataContractCriticalHelper_Member_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataMember_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member::*)(::System::Runtime::Serialization::DataMember*, ::StringW, int32_t)>(&::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaa3fd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member::_ctor(::System::Runtime::Serialization::DataMember*  member, ::StringW  ns, int32_t  baseTypeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::DataMember*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, member, ns, baseTypeIndex);
}
// Ctor Parameters [CppParam { name: "member", ty: "::System::Runtime::Serialization::DataMember*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseTypeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member::ClassDataContractCriticalHelper_ClassDataContract_Member(::System::Runtime::Serialization::DataMember*  member, ::StringW  ns, int32_t  baseTypeIndex) noexcept  {
this->member = member;
this->ns = ns;
this->baseTypeIndex = baseTypeIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member::ClassDataContractCriticalHelper_ClassDataContract_Member()   {
}
