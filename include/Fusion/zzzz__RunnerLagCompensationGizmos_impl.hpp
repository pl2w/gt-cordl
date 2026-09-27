#pragma once
// IWYU pragma private; include "Fusion/RunnerLagCompensationGizmos.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Fusion/zzzz__RunnerLagCompensationGizmos_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
//  Writing Method size for method: ::Fusion::RunnerLagCompensationGizmos.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerLagCompensationGizmos::*)()>(&::Fusion::RunnerLagCompensationGizmos::Awake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x60f515c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerLagCompensationGizmos.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerLagCompensationGizmos::*)()>(&::Fusion::RunnerLagCompensationGizmos::OnDrawGizmos)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60f5284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerLagCompensationGizmos.RenderHitboxHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerLagCompensationGizmos::*)()>(&::Fusion::RunnerLagCompensationGizmos::RenderHitboxHistory)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x60f56a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"RenderHitboxHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerLagCompensationGizmos.RenderBHVBroadphase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerLagCompensationGizmos::*)()>(&::Fusion::RunnerLagCompensationGizmos::RenderBHVBroadphase)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x60f537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"RenderBHVBroadphase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RunnerLagCompensationGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RunnerLagCompensationGizmos::*)()>(&::Fusion::RunnerLagCompensationGizmos::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60f5dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_DrawSnapshotHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawSnapshotHistory;
}
constexpr bool const& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_DrawSnapshotHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawSnapshotHistory;
}
constexpr void Fusion::RunnerLagCompensationGizmos::__cordl_internal_set_DrawSnapshotHistory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawSnapshotHistory = value;
}
constexpr bool& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_DrawBroadphaseNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawBroadphaseNodes;
}
constexpr bool const& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_DrawBroadphaseNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawBroadphaseNodes;
}
constexpr void Fusion::RunnerLagCompensationGizmos::__cordl_internal_set_DrawBroadphaseNodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawBroadphaseNodes = value;
}
constexpr ::UnityEngine::Color& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_StateAuthHitboxCollor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateAuthHitboxCollor;
}
constexpr ::UnityEngine::Color const& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_StateAuthHitboxCollor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StateAuthHitboxCollor;
}
constexpr void Fusion::RunnerLagCompensationGizmos::__cordl_internal_set_StateAuthHitboxCollor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StateAuthHitboxCollor = value;
}
constexpr ::UnityEngine::Color& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_NonStateAuthHitboxCollor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NonStateAuthHitboxCollor;
}
constexpr ::UnityEngine::Color const& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get_NonStateAuthHitboxCollor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NonStateAuthHitboxCollor;
}
constexpr void Fusion::RunnerLagCompensationGizmos::__cordl_internal_set_NonStateAuthHitboxCollor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NonStateAuthHitboxCollor = value;
}
constexpr ::UnityW<::Fusion::NetworkRunner>& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get__runner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr ::UnityW<::Fusion::NetworkRunner> const& Fusion::RunnerLagCompensationGizmos::__cordl_internal_get__runner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runner;
}
constexpr void Fusion::RunnerLagCompensationGizmos::__cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runner = value;
}
inline void Fusion::RunnerLagCompensationGizmos::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerLagCompensationGizmos::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerLagCompensationGizmos::RenderHitboxHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"RenderHitboxHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerLagCompensationGizmos::RenderBHVBroadphase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {"RenderBHVBroadphase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RunnerLagCompensationGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RunnerLagCompensationGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::RunnerLagCompensationGizmos* Fusion::RunnerLagCompensationGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RunnerLagCompensationGizmos*>());
}
// Ctor Parameters []
constexpr ::Fusion::RunnerLagCompensationGizmos::RunnerLagCompensationGizmos()   {
}
