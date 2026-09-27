#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_UpdateSkinnedMeshBoundsFromBounds.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB2_UpdateSkinnedMeshBoundsFromBounds_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::Start)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x9d74e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d751b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::*)()>(&::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d75458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_set_objects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_get_smr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smr;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_get_smr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smr;
}
constexpr void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::__cordl_internal_set_smr(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smr = value;
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds* GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBounds::MB2_UpdateSkinnedMeshBoundsFromBounds()   {
}
