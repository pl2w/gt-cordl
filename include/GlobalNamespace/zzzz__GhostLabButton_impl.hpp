#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLabButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GhostLabButton_def.hpp"
#include "GlobalNamespace/zzzz__GhostLab_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostLabButton.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostLabButton::*)()>(&::GlobalNamespace::GhostLabButton::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d0b0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabButton*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabButton::*)()>(&::GlobalNamespace::GhostLabButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d0b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostLabButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostLabButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostLabButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostLabButton::*)()>(&::GlobalNamespace::GhostLabButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0b18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostLab>& GlobalNamespace::GhostLabButton::__cordl_internal_get_ghostLab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostLab;
}
constexpr ::UnityW<::GlobalNamespace::GhostLab> const& GlobalNamespace::GhostLabButton::__cordl_internal_get_ghostLab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostLab;
}
constexpr void GlobalNamespace::GhostLabButton::__cordl_internal_set_ghostLab(::UnityW<::GlobalNamespace::GhostLab>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostLab = value;
}
constexpr int32_t& GlobalNamespace::GhostLabButton::__cordl_internal_get_buttonIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr int32_t const& GlobalNamespace::GhostLabButton::__cordl_internal_get_buttonIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr void GlobalNamespace::GhostLabButton::__cordl_internal_set_buttonIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonIndex = value;
}
constexpr bool& GlobalNamespace::GhostLabButton::__cordl_internal_get_forSingleDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forSingleDoor;
}
constexpr bool const& GlobalNamespace::GhostLabButton::__cordl_internal_get_forSingleDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forSingleDoor;
}
constexpr void GlobalNamespace::GhostLabButton::__cordl_internal_set_forSingleDoor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forSingleDoor = value;
}
inline bool GlobalNamespace::GhostLabButton::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabButton*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostLabButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostLabButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostLabButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostLabButton* GlobalNamespace::GhostLabButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostLabButton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::GhostLabButton::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::GhostLabButton::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostLabButton::GhostLabButton()   {
}
