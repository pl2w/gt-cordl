#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Sizei.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Sizei.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_Sizei::*)(::GlobalNamespace::OVRPlugin_Sizei)>(&::GlobalNamespace::OVRPlugin_Sizei::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa60eadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Sizei>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Sizei.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_Sizei::*)(::System::Object*)>(&::GlobalNamespace::OVRPlugin_Sizei::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa60eb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_Sizei.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRPlugin_Sizei::*)()>(&::GlobalNamespace::OVRPlugin_Sizei::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa60eba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(),
                    {::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(), 2}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_Sizei::setStaticF_zero(::GlobalNamespace::OVRPlugin_Sizei  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Sizei, "zero", ::GlobalNamespace::OVRPlugin_Sizei>(std::forward<::GlobalNamespace::OVRPlugin_Sizei>(value));
}
inline ::GlobalNamespace::OVRPlugin_Sizei GlobalNamespace::OVRPlugin_Sizei::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Sizei, "zero", ::GlobalNamespace::OVRPlugin_Sizei>();
}
inline bool GlobalNamespace::OVRPlugin_Sizei::Equals(::GlobalNamespace::OVRPlugin_Sizei  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Sizei>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRPlugin_Sizei::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRPlugin_Sizei::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRPlugin_Sizei>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>"
constexpr  GlobalNamespace::OVRPlugin_Sizei::operator ::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>* GlobalNamespace::OVRPlugin_Sizei::i___System__IEquatable_1___GlobalNamespace__OVRPlugin_Sizei_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRPlugin_Sizei>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Sizei::OVRPlugin_Sizei(int32_t  w, int32_t  h) noexcept  {
this->w = w;
this->h = h;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Sizei::OVRPlugin_Sizei()   {
}
