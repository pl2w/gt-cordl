#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinedPrefabData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinedPrefabData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinedPrefabData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinedPrefabData::*)()>(&::GorillaTag::Rendering::EdMeshCombinedPrefabData::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d558d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::EdMeshCombinedPrefabData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::EdMeshCombinedPrefabData::*)()>(&::GorillaTag::Rendering::EdMeshCombinedPrefabData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d558dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_disabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabled;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_disabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabled;
}
constexpr void GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_set_disabled(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_combined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combined;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_get_combined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combined;
}
constexpr void GorillaTag::Rendering::EdMeshCombinedPrefabData::__cordl_internal_set_combined(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combined = value;
}
inline void GorillaTag::Rendering::EdMeshCombinedPrefabData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::EdMeshCombinedPrefabData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::EdMeshCombinedPrefabData* GorillaTag::Rendering::EdMeshCombinedPrefabData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::EdMeshCombinedPrefabData*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::EdMeshCombinedPrefabData::EdMeshCombinedPrefabData()   {
}
