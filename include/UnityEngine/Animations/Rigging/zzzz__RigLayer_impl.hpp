#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigLayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigConstraint_impl.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigLayer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigConstraint_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigLayer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Rig_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_rig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animations::Rigging::Rig> (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_rig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7a9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_rig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7a9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_name)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xae7a9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_constraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_constraints)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae7aa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_constraints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_jobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Animations::IAnimationJob*> (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_jobs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae7aa7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_jobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7aa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.set_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigLayer::*)(bool)>(&::UnityEngine::Animations::Rigging::RigLayer::set_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7aa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigLayer::*)(::UnityEngine::Animator*)>(&::UnityEngine::Animations::Rigging::RigLayer::Initialize)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xae7aaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xae7af4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::Reset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae7b06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigLayer.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigLayer::*)()>(&::UnityEngine::Animations::Rigging::RigLayer::IsValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae7b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animations::Rigging::Rig>& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rig;
}
constexpr ::UnityW<::UnityEngine::Animations::Rigging::Rig> const& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rig;
}
constexpr void UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_set_m_Rig(::UnityW<::UnityEngine::Animations::Rigging::Rig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rig = value;
}
constexpr bool& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Active;
}
constexpr bool const& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Active;
}
constexpr void UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_set_m_Active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Active = value;
}
constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Constraints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Constraints;
}
constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> const& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Constraints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Constraints;
}
constexpr void UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_set_m_Constraints(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Constraints = value;
}
constexpr ::ArrayW<::UnityEngine::Animations::IAnimationJob*>& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Jobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Jobs;
}
constexpr ::ArrayW<::UnityEngine::Animations::IAnimationJob*> const& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get_m_Jobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Jobs;
}
constexpr void UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_set_m_Jobs(::ArrayW<::UnityEngine::Animations::IAnimationJob*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Jobs = value;
}
constexpr bool& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get__isInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized_k__BackingField;
}
constexpr bool const& UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_get__isInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized_k__BackingField;
}
constexpr void UnityEngine::Animations::Rigging::RigLayer::__cordl_internal_set__isInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Animations::Rigging::Rig> UnityEngine::Animations::Rigging::RigLayer::get_rig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_rig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animations::Rigging::Rig>>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigLayer::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::Animations::Rigging::RigLayer::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> UnityEngine::Animations::Rigging::RigLayer::get_constraints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_constraints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Animations::IAnimationJob*> UnityEngine::Animations::Rigging::RigLayer::get_jobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_jobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Animations::IAnimationJob*>>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigLayer::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigLayer::set_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Animations::Rigging::RigLayer::Initialize(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, animator);
}
inline void UnityEngine::Animations::Rigging::RigLayer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Animations::Rigging::RigLayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigLayer::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigLayer*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IRigLayer"
constexpr  UnityEngine::Animations::Rigging::RigLayer::operator ::UnityEngine::Animations::Rigging::IRigLayer*() noexcept {
return static_cast<::UnityEngine::Animations::Rigging::IRigLayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Animations::Rigging::IRigLayer"
constexpr ::UnityEngine::Animations::Rigging::IRigLayer* UnityEngine::Animations::Rigging::RigLayer::i___UnityEngine__Animations__Rigging__IRigLayer() noexcept {
return static_cast<::UnityEngine::Animations::Rigging::IRigLayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigLayer::RigLayer()   {
}
