#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSimpleNameID.hpp"
#include "GlobalNamespace/zzzz__GTSimpleNameID_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTSimpleNameID.FromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTSimpleNameID (*)(::StringW)>(&::GlobalNamespace::GTSimpleNameID::FromString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5697330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSimpleNameID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GTSimpleNameID::*)()>(&::GlobalNamespace::GTSimpleNameID::ToString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5697550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(),
                    {::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTSimpleNameID._Read6Bits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::GlobalNamespace::GTSimpleNameID>, int32_t)>(&::GlobalNamespace::GTSimpleNameID::_Read6Bits)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5697670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(),
                        {"_Read6Bits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GTSimpleNameID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GTSimpleNameID GlobalNamespace::GTSimpleNameID::FromString(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTSimpleNameID>(nullptr, ___internal_method, input);
}
inline ::StringW GlobalNamespace::GTSimpleNameID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::GTSimpleNameID::_Read6Bits(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTSimpleNameID>  cv, int32_t  bitOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSimpleNameID>(),
                        {"_Read6Bits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::GTSimpleNameID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, cv, bitOffset);
}
// Ctor Parameters [CppParam { name: "U0", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "U1", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "U2", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "U3", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTSimpleNameID::GTSimpleNameID(uint64_t  U0, uint64_t  U1, uint64_t  U2, uint64_t  U3) noexcept  {
this->U0 = U0;
this->U1 = U1;
this->U2 = U2;
this->U3 = U3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTSimpleNameID::GTSimpleNameID()   {
}
