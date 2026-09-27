#pragma once
// IWYU pragma private; include "TagEffects/TagEffectsCombo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TagEffects/zzzz__TagEffectsCombo_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
//  Writing Method size for method: ::TagEffects::TagEffectsCombo.System_IEquatable_TagEffects_TagEffectsCombo__Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::TagEffectsCombo::*)(::TagEffects::TagEffectsCombo*)>(&::TagEffects::TagEffectsCombo::System_IEquatable_TagEffects_TagEffectsCombo__Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5cd9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                        {"System.IEquatable<TagEffects.TagEffectsCombo>.Equals", {}, {::i2c::type_of<::TagEffects::TagEffectsCombo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsCombo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TagEffects::TagEffectsCombo::*)(::System::Object*)>(&::TagEffects::TagEffectsCombo::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cd92b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                    {::i2c::class_of<::TagEffects::TagEffectsCombo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsCombo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TagEffects::TagEffectsCombo::*)()>(&::TagEffects::TagEffectsCombo::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cd933c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                    {::i2c::class_of<::TagEffects::TagEffectsCombo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::TagEffectsCombo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::TagEffectsCombo::*)()>(&::TagEffects::TagEffectsCombo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd88cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TagEffects::TagEffectPack>& TagEffects::TagEffectsCombo::__cordl_internal_get_inputA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputA;
}
constexpr ::UnityW<::TagEffects::TagEffectPack> const& TagEffects::TagEffectsCombo::__cordl_internal_get_inputA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputA;
}
constexpr void TagEffects::TagEffectsCombo::__cordl_internal_set_inputA(::UnityW<::TagEffects::TagEffectPack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputA = value;
}
constexpr ::UnityW<::TagEffects::TagEffectPack>& TagEffects::TagEffectsCombo::__cordl_internal_get_inputB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputB;
}
constexpr ::UnityW<::TagEffects::TagEffectPack> const& TagEffects::TagEffectsCombo::__cordl_internal_get_inputB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputB;
}
constexpr void TagEffects::TagEffectsCombo::__cordl_internal_set_inputB(::UnityW<::TagEffects::TagEffectPack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputB = value;
}
inline bool TagEffects::TagEffectsCombo::System_IEquatable_TagEffects_TagEffectsCombo__Equals(::TagEffects::TagEffectsCombo*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                        {"System.IEquatable<TagEffects.TagEffectsCombo>.Equals", {}, {::i2c::type_of<::TagEffects::TagEffectsCombo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool TagEffects::TagEffectsCombo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::TagEffects::TagEffectsCombo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t TagEffects::TagEffectsCombo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::TagEffects::TagEffectsCombo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void TagEffects::TagEffectsCombo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::TagEffectsCombo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::TagEffectsCombo* TagEffects::TagEffectsCombo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::TagEffectsCombo*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::TagEffects::TagEffectsCombo*>"
constexpr  TagEffects::TagEffectsCombo::operator ::System::IEquatable_1<::TagEffects::TagEffectsCombo*>*() noexcept {
return static_cast<::System::IEquatable_1<::TagEffects::TagEffectsCombo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::TagEffects::TagEffectsCombo*>"
constexpr ::System::IEquatable_1<::TagEffects::TagEffectsCombo*>* TagEffects::TagEffectsCombo::i___System__IEquatable_1___TagEffects__TagEffectsCombo__() noexcept {
return static_cast<::System::IEquatable_1<::TagEffects::TagEffectsCombo*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TagEffects::TagEffectsCombo::TagEffectsCombo()   {
}
