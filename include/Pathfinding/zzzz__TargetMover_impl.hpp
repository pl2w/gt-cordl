#pragma once
// IWYU pragma private; include "Pathfinding/TargetMover.hpp"
#include "Pathfinding/zzzz__IAstarAI_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__TargetMover_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::TargetMover.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TargetMover::*)()>(&::Pathfinding::TargetMover::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e6bda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TargetMover.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TargetMover::*)()>(&::Pathfinding::TargetMover::OnGUI)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e6be84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TargetMover.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TargetMover::*)()>(&::Pathfinding::TargetMover::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e6c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TargetMover.UpdateTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TargetMover::*)()>(&::Pathfinding::TargetMover::UpdateTargetPosition)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5e6bf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"UpdateTargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::TargetMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::TargetMover::*)()>(&::Pathfinding::TargetMover::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Pathfinding::TargetMover::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::TargetMover::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::TargetMover::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::TargetMover::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<::Pathfinding::IAstarAI*>& Pathfinding::TargetMover::__cordl_internal_get_ais()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ais;
}
constexpr ::ArrayW<::Pathfinding::IAstarAI*> const& Pathfinding::TargetMover::__cordl_internal_get_ais() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ais;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_ais(::ArrayW<::Pathfinding::IAstarAI*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ais = value;
}
constexpr bool& Pathfinding::TargetMover::__cordl_internal_get_onlyOnDoubleClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyOnDoubleClick;
}
constexpr bool const& Pathfinding::TargetMover::__cordl_internal_get_onlyOnDoubleClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyOnDoubleClick;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_onlyOnDoubleClick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyOnDoubleClick = value;
}
constexpr bool& Pathfinding::TargetMover::__cordl_internal_get_use2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2D;
}
constexpr bool const& Pathfinding::TargetMover::__cordl_internal_get_use2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2D;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_use2D(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___use2D = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Pathfinding::TargetMover::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Pathfinding::TargetMover::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void Pathfinding::TargetMover::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
inline void Pathfinding::TargetMover::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TargetMover::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TargetMover::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TargetMover::UpdateTargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {"UpdateTargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::TargetMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::TargetMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::TargetMover* Pathfinding::TargetMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::TargetMover*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::TargetMover::TargetMover()   {
}
