#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticButton_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5782d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticButton::*)(bool)>(&::GlobalNamespace::CosmeticButton::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5782d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5782d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::UpdateColor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5782dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::UpdatePosition)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5782f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton.AllowNonSubscribedPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::AllowNonSubscribedPress)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57831d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticButton::*)()>(&::GlobalNamespace::CosmeticButton::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57832d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticButton::__cordl_internal_get_pressedOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticButton::__cordl_internal_get_pressedOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedOffset;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_pressedOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedOffset = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::CosmeticButton::__cordl_internal_get_disabledMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::CosmeticButton::__cordl_internal_get_disabledMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledMaterial;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_disabledMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabledMaterial = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticButton::__cordl_internal_get_disabledOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticButton::__cordl_internal_get_disabledOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledOffset;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_disabledOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabledOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticButton::__cordl_internal_get_startingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticButton::__cordl_internal_get_startingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingPos;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_startingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticButton::__cordl_internal_get_posOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticButton::__cordl_internal_get_posOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posOffset;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_posOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___posOffset = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticButton::__cordl_internal_get_SetCosmeticItemID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetCosmeticItemID;
}
constexpr ::StringW const& GlobalNamespace::CosmeticButton::__cordl_internal_get_SetCosmeticItemID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetCosmeticItemID;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set_SetCosmeticItemID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetCosmeticItemID = value;
}
constexpr bool& GlobalNamespace::CosmeticButton::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::CosmeticButton::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticButton::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
inline bool GlobalNamespace::CosmeticButton::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticButton::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CosmeticButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticButton::UpdatePosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticButton::AllowNonSubscribedPress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticButton*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticButton* GlobalNamespace::CosmeticButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticButton::CosmeticButton()   {
}
