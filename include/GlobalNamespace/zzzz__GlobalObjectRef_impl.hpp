#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalObjectRef.hpp"
#include "GlobalNamespace/zzzz__GlobalObjectRefType_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__GlobalObjectRef_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GlobalObjectRef.ObjectToRefSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GlobalObjectRef (*)(::UnityEngine::Object*)>(&::GlobalNamespace::GlobalObjectRef::ObjectToRefSlow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a1c1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalObjectRef>(),
                        {"ObjectToRefSlow", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GlobalObjectRef.RefToObjectSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::GlobalNamespace::GlobalObjectRef)>(&::GlobalNamespace::GlobalObjectRef::RefToObjectSlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a1c20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalObjectRef>(),
                        {"RefToObjectSlow", {}, {::i2c::type_of<::GlobalNamespace::GlobalObjectRef>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_targetObjectId()  {
return this->___targetObjectId;
}
constexpr uint64_t const& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_targetObjectId() const {
return this->___targetObjectId;
}
constexpr void GlobalNamespace::GlobalObjectRef::__cordl_internal_set_targetObjectId(uint64_t  value)  {
this->___targetObjectId = value;
}
constexpr uint64_t& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_targetPrefabId()  {
return this->___targetPrefabId;
}
constexpr uint64_t const& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_targetPrefabId() const {
return this->___targetPrefabId;
}
constexpr void GlobalNamespace::GlobalObjectRef::__cordl_internal_set_targetPrefabId(uint64_t  value)  {
this->___targetPrefabId = value;
}
constexpr ::System::Guid& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_assetGUID()  {
return this->___assetGUID;
}
constexpr ::System::Guid const& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_assetGUID() const {
return this->___assetGUID;
}
constexpr void GlobalNamespace::GlobalObjectRef::__cordl_internal_set_assetGUID(::System::Guid  value)  {
this->___assetGUID = value;
}
constexpr int32_t& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_identifierType()  {
return this->___identifierType;
}
constexpr int32_t const& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_identifierType() const {
return this->___identifierType;
}
constexpr void GlobalNamespace::GlobalObjectRef::__cordl_internal_set_identifierType(int32_t  value)  {
this->___identifierType = value;
}
constexpr ::GlobalNamespace::GlobalObjectRefType& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_refType()  {
return this->___refType;
}
constexpr ::GlobalNamespace::GlobalObjectRefType const& GlobalNamespace::GlobalObjectRef::__cordl_internal_get_refType() const {
return this->___refType;
}
constexpr void GlobalNamespace::GlobalObjectRef::__cordl_internal_set_refType(::GlobalNamespace::GlobalObjectRefType  value)  {
this->___refType = value;
}
inline ::GlobalNamespace::GlobalObjectRef GlobalNamespace::GlobalObjectRef::ObjectToRefSlow(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalObjectRef>(),
                        {"ObjectToRefSlow", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GlobalObjectRef>(nullptr, ___internal_method, target);
}
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::GlobalObjectRef::RefToObjectSlow(::GlobalNamespace::GlobalObjectRef  ref)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlobalObjectRef>(),
                        {"RefToObjectSlow", {}, {::i2c::type_of<::GlobalNamespace::GlobalObjectRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, ref);
}
// Ctor Parameters [CppParam { name: "targetObjectId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetPrefabId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "assetGUID", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "identifierType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refType", ty: "::GlobalNamespace::GlobalObjectRefType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GlobalObjectRef::GlobalObjectRef(uint64_t  targetObjectId, uint64_t  targetPrefabId, ::System::Guid  assetGUID, int32_t  identifierType, ::GlobalNamespace::GlobalObjectRefType  refType) noexcept  {
this->targetObjectId = targetObjectId;
this->targetPrefabId = targetPrefabId;
this->assetGUID = assetGUID;
this->identifierType = identifierType;
this->refType = refType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalObjectRef::GlobalObjectRef()   {
}
