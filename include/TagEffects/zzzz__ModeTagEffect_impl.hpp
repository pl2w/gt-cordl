#pragma once
// IWYU pragma private; include "TagEffects/ModeTagEffect.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TagEffects/zzzz__ModeTagEffect_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "TagEffects/zzzz__TagEffectPack_def.hpp"
//  Writing Method size for method: ::TagEffects::ModeTagEffect.get_Modes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* (::TagEffects::ModeTagEffect::*)()>(&::TagEffects::ModeTagEffect::get_Modes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cd861c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::ModeTagEffect*>(),
                        {"get_Modes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TagEffects::ModeTagEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TagEffects::ModeTagEffect::*)()>(&::TagEffects::ModeTagEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd938c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::ModeTagEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& TagEffects::ModeTagEffect::__cordl_internal_get_modes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& TagEffects::ModeTagEffect::__cordl_internal_get_modes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modes;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_modes(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modes = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& TagEffects::ModeTagEffect::__cordl_internal_get_modesHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modesHash;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& TagEffects::ModeTagEffect::__cordl_internal_get_modesHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modesHash;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_modesHash(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modesHash = value;
}
constexpr ::UnityW<::TagEffects::TagEffectPack>& TagEffects::ModeTagEffect::__cordl_internal_get_tagEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffect;
}
constexpr ::UnityW<::TagEffects::TagEffectPack> const& TagEffects::ModeTagEffect::__cordl_internal_get_tagEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagEffect;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_tagEffect(::UnityW<::TagEffects::TagEffectPack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagEffect = value;
}
constexpr bool& TagEffects::ModeTagEffect::__cordl_internal_get_blockTagOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockTagOverride;
}
constexpr bool const& TagEffects::ModeTagEffect::__cordl_internal_get_blockTagOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockTagOverride;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_blockTagOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockTagOverride = value;
}
constexpr bool& TagEffects::ModeTagEffect::__cordl_internal_get_blockFistBumpOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockFistBumpOverride;
}
constexpr bool const& TagEffects::ModeTagEffect::__cordl_internal_get_blockFistBumpOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockFistBumpOverride;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_blockFistBumpOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockFistBumpOverride = value;
}
constexpr bool& TagEffects::ModeTagEffect::__cordl_internal_get_blockHiveFiveOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockHiveFiveOverride;
}
constexpr bool const& TagEffects::ModeTagEffect::__cordl_internal_get_blockHiveFiveOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockHiveFiveOverride;
}
constexpr void TagEffects::ModeTagEffect::__cordl_internal_set_blockHiveFiveOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockHiveFiveOverride = value;
}
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* TagEffects::ModeTagEffect::get_Modes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::ModeTagEffect*>(),
                        {"get_Modes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>(this, ___internal_method);
}
inline void TagEffects::ModeTagEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TagEffects::ModeTagEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TagEffects::ModeTagEffect* TagEffects::ModeTagEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TagEffects::ModeTagEffect*>());
}
// Ctor Parameters []
constexpr ::TagEffects::ModeTagEffect::ModeTagEffect()   {
}
