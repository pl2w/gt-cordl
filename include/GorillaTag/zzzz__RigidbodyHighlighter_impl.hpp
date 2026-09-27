#pragma once
// IWYU pragma private; include "GorillaTag/RigidbodyHighlighter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__RigidbodyHighlighter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.get_ButtonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::get_ButtonText)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d351a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"get_ButtonText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d35210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)(bool)>(&::GorillaTag::RigidbodyHighlighter::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d35218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::Awake)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5d35220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d3536c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.GetAwakeRigidbodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* (*)()>(&::GorillaTag::RigidbodyHighlighter::GetAwakeRigidbodies)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5d35560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"GetAwakeRigidbodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.HighlightActiveRigidbodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::HighlightActiveRigidbodies)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d35d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"HighlightActiveRigidbodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.GetRigidbodyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::GetRigidbodyNames)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d35d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"GetRigidbodyNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d35ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.DrawBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Color, float_t)>(&::GorillaTag::RigidbodyHighlighter::DrawBox)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5d358f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter.DrawTracers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::DrawTracers)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d357a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"DrawTracers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::RigidbodyHighlighter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::RigidbodyHighlighter::*)()>(&::GorillaTag::RigidbodyHighlighter::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5d360a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__inGameDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inGameDuration;
}
constexpr float_t const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__inGameDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inGameDuration;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__inGameDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inGameDuration = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineRenderer;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineRenderer = value;
}
constexpr float_t& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__lineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr float_t const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__lineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lineWidth;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__lineWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lineWidth = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__tracerOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracerOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__tracerOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracerOffset;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__tracerOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tracerOffset = value;
}
constexpr bool& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__rigidbodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& GorillaTag::RigidbodyHighlighter::__cordl_internal_get__rigidbodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr void GorillaTag::RigidbodyHighlighter::__cordl_internal_set__rigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodies = value;
}
inline void GorillaTag::RigidbodyHighlighter::setStaticF_Instance(::UnityW<::GorillaTag::RigidbodyHighlighter>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::RigidbodyHighlighter>, "Instance", ::GorillaTag::RigidbodyHighlighter*>(std::forward<::UnityW<::GorillaTag::RigidbodyHighlighter>>(value));
}
inline ::UnityW<::GorillaTag::RigidbodyHighlighter> GorillaTag::RigidbodyHighlighter::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::RigidbodyHighlighter>, "Instance", ::GorillaTag::RigidbodyHighlighter*>();
}
inline ::StringW GorillaTag::RigidbodyHighlighter::get_ButtonText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"get_ButtonText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaTag::RigidbodyHighlighter::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::RigidbodyHighlighter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* GorillaTag::RigidbodyHighlighter::GetAwakeRigidbodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"GetAwakeRigidbodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*>(nullptr, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::HighlightActiveRigidbodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"HighlightActiveRigidbodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::GetRigidbodyNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"GetRigidbodyNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::DrawBox(::UnityEngine::Transform*  tx, ::UnityEngine::Color  color, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tx, color, duration);
}
inline void GorillaTag::RigidbodyHighlighter::DrawTracers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {"DrawTracers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::RigidbodyHighlighter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::RigidbodyHighlighter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::RigidbodyHighlighter* GorillaTag::RigidbodyHighlighter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::RigidbodyHighlighter*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::RigidbodyHighlighter::RigidbodyHighlighter()   {
}
