#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerRoot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ObjsToCombineTypes_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.get_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (::GlobalNamespace::MB3_MeshBakerRoot::*)()>(&::GlobalNamespace::MB3_MeshBakerRoot::get_textureBakeResults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerRoot::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB3_MeshBakerRoot::set_textureBakeResults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.GetObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::MB3_MeshBakerRoot::*)()>(&::GlobalNamespace::MB3_MeshBakerRoot::GetObjectsToCombine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7883c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.PurgeNullsFromObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerRoot::*)()>(&::GlobalNamespace::MB3_MeshBakerRoot::PurgeNullsFromObjectsToCombine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d78844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.DoCombinedValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MB3_MeshBakerRoot*, ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_ValidationLevel)>(&::GlobalNamespace::MB3_MeshBakerRoot::DoCombinedValidate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x9d78848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {"DoCombinedValidate", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_ObjsToCombineTypes>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_ValidationLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot.ValidateTextureBakerGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MB3_MeshBakerRoot*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::DigitalOpus::MB::Core::MB2_ValidationLevel)>(&::GlobalNamespace::MB3_MeshBakerRoot::ValidateTextureBakerGameObjects)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0x9d78c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {"ValidateTextureBakerGameObjects", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_ValidationLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerRoot::*)()>(&::GlobalNamespace::MB3_MeshBakerRoot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d77d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::MB3_MeshBakerRoot::__cordl_internal_get_sortAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MB3_MeshBakerRoot::__cordl_internal_get_sortAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortAxis;
}
constexpr void GlobalNamespace::MB3_MeshBakerRoot::__cordl_internal_set_sortAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortAxis = value;
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> GlobalNamespace::MB3_MeshBakerRoot::get_textureBakeResults()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerRoot::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB3_MeshBakerRoot::GetObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerRoot::PurgeNullsFromObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBakerRoot::DoCombinedValidate(::GlobalNamespace::MB3_MeshBakerRoot*  mom, ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes  objToCombineType, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {"DoCombinedValidate", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_ObjsToCombineTypes>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_ValidationLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mom, objToCombineType, editorMethods, validationLevel);
}
inline bool GlobalNamespace::MB3_MeshBakerRoot::ValidateTextureBakerGameObjects(::GlobalNamespace::MB3_MeshBakerRoot*  mom, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {"ValidateTextureBakerGameObjects", {}, {::i2c::type_of<::GlobalNamespace::MB3_MeshBakerRoot*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_ValidationLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mom, objsToMesh, validationLevel);
}
inline void GlobalNamespace::MB3_MeshBakerRoot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshBakerRoot* GlobalNamespace::MB3_MeshBakerRoot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBakerRoot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerRoot::MB3_MeshBakerRoot()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects.SortByDistanceAlongAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::SortByDistanceAlongAxis)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x9d7968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*>(),
                        {"SortByDistanceAlongAxis", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::*)()>(&::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d79b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::__cordl_internal_get_sortAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::__cordl_internal_get_sortAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortAxis;
}
constexpr void GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::__cordl_internal_set_sortAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortAxis = value;
}
inline void GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::SortByDistanceAlongAxis(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*>(),
                        {"SortByDistanceAlongAxis", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gos);
}
inline void GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects* GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects::MB3_MeshBakerRoot_ZSortObjects()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::*)(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*, ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*)>(&::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d79b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>(), ::i2c::type_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::*)()>(&::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d79b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::Compare(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*  a, ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>(), ::i2c::type_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer* GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>"
constexpr  GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>* GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::i___System__Collections__Generic__IComparer_1___GlobalNamespace__ZSortObjects_MB3_MeshBakerRoot_Item__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer::ZSortObjects_MB3_MeshBakerRoot_ItemComparer()   {
}
//  Writing Method size for method: ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::*)()>(&::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d79b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_get_go()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_get_go() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___go;
}
constexpr void GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___go = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_get_point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_get_point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___point;
}
constexpr void GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::__cordl_internal_set_point(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___point = value;
}
inline void GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item* GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item::ZSortObjects_MB3_MeshBakerRoot_Item()   {
}
