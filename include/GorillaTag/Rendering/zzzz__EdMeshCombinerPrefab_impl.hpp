#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_def.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinedPrefabData_def.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CombinerCriteria_def.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CombinerInfo_def.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CopyMeshJob_def.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerPrefab::*)()>(&::GorillaTag::Rendering::EdMeshCombinerPrefab::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d559c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab.Special_MarkDoNotCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*)>(&::GorillaTag::Rendering::EdMeshCombinerPrefab::Special_MarkDoNotCombine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d58dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"Special_MarkDoNotCombine", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab.CombineMeshesRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Rendering::EdMeshCombinerPrefab*, bool, ::GorillaTag::Rendering::EdMeshCombinedPrefabData*)>(&::GorillaTag::Rendering::EdMeshCombinerPrefab::CombineMeshesRuntime)> {
  constexpr static std::size_t size = 0x3384;
  constexpr static std::size_t addrs = 0x5d55a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"CombineMeshesRuntime", {}, {::i2c::type_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerPrefab::*)()>(&::GorillaTag::Rendering::EdMeshCombinerPrefab::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d58eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerPrefab::*)()>(&::GorillaTag::Rendering::EdMeshCombinerPrefab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d58eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::Rendering::EdMeshCombinedPrefabData*& GorillaTag::Rendering::EdMeshCombinerPrefab::__cordl_internal_get_combinedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedData;
}
constexpr ::GorillaTag::Rendering::EdMeshCombinedPrefabData* const& GorillaTag::Rendering::EdMeshCombinerPrefab::__cordl_internal_get_combinedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedData;
}
constexpr void GorillaTag::Rendering::EdMeshCombinerPrefab::__cordl_internal_set_combinedData(::GorillaTag::Rendering::EdMeshCombinedPrefabData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedData = value;
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab::Special_MarkDoNotCombine(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"Special_MarkDoNotCombine", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component);
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab::CombineMeshesRuntime(::GorillaTag::Rendering::EdMeshCombinerPrefab*  combiner, bool  undo, ::GorillaTag::Rendering::EdMeshCombinedPrefabData*  combinedPrefabData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"CombineMeshesRuntime", {}, {::i2c::type_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, combiner, undo, combinedPrefabData);
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::EdMeshCombinerPrefab* GorillaTag::Rendering::EdMeshCombinerPrefab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::EdMeshCombinerPrefab*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::EdMeshCombinerPrefab::EdMeshCombinerPrefab()   {
}
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinerPrefab___c::*)()>(&::GorillaTag::Rendering::EdMeshCombinerPrefab___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d59f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinerPrefab___c._CombineMeshesRuntime_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Rendering::EdMeshCombinerPrefab___c::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GorillaTag::Rendering::EdMeshCombinerPrefab___c::_CombineMeshesRuntime_b__9_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d59f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(),
                        {"<CombineMeshesRuntime>b__9_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Rendering::EdMeshCombinerPrefab___c::setStaticF___9(::GorillaTag::Rendering::EdMeshCombinerPrefab___c*  value)  {
::cordl_internals::setStaticField<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*, "<>9", ::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(std::forward<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(value));
}
inline ::GorillaTag::Rendering::EdMeshCombinerPrefab___c* GorillaTag::Rendering::EdMeshCombinerPrefab___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*, "<>9", ::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>();
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab___c::setStaticF___9__9_0(::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*, "<>9__9_0", ::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Transform>>* GorillaTag::Rendering::EdMeshCombinerPrefab___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Transform>>*, "<>9__9_0", ::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>();
}
inline void GorillaTag::Rendering::EdMeshCombinerPrefab___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::Rendering::EdMeshCombinerPrefab___c::_CombineMeshesRuntime_b__9_0(::UnityEngine::Transform*  a, ::UnityEngine::Transform*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>(),
                        {"<CombineMeshesRuntime>b__9_0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GorillaTag::Rendering::EdMeshCombinerPrefab___c* GorillaTag::Rendering::EdMeshCombinerPrefab___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::EdMeshCombinerPrefab___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::EdMeshCombinerPrefab___c::EdMeshCombinerPrefab___c()   {
}
