#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderUIResource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderUIResource_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceQuantity_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderUIResource.SetResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderUIResource::*)(::GlobalNamespace::BuilderResourceQuantity, ::GorillaTagScripts::BuilderTable*)>(&::GlobalNamespace::BuilderUIResource::SetResourceCost)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x57e2b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {"SetResourceCost", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>(), ::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderUIResource.GetResourceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderUIResource::*)(::GlobalNamespace::BuilderResourceType)>(&::GlobalNamespace::BuilderUIResource::GetResourceName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57e2cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {"GetResourceName", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderUIResource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderUIResource::*)()>(&::GlobalNamespace::BuilderUIResource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e2d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::BuilderUIResource::__cordl_internal_get_resourceNameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceNameLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::BuilderUIResource::__cordl_internal_get_resourceNameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceNameLabel;
}
constexpr void GlobalNamespace::BuilderUIResource::__cordl_internal_set_resourceNameLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceNameLabel = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::BuilderUIResource::__cordl_internal_get_costLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::BuilderUIResource::__cordl_internal_get_costLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costLabel;
}
constexpr void GlobalNamespace::BuilderUIResource::__cordl_internal_set_costLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costLabel = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::BuilderUIResource::__cordl_internal_get_availableLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::BuilderUIResource::__cordl_internal_get_availableLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableLabel;
}
constexpr void GlobalNamespace::BuilderUIResource::__cordl_internal_set_availableLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableLabel = value;
}
inline void GlobalNamespace::BuilderUIResource::SetResourceCost(::GlobalNamespace::BuilderResourceQuantity  resourceCost, ::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {"SetResourceCost", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceQuantity>(), ::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceCost, table);
}
inline ::StringW GlobalNamespace::BuilderUIResource::GetResourceName(::GlobalNamespace::BuilderResourceType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {"GetResourceName", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline void GlobalNamespace::BuilderUIResource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderUIResource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderUIResource* GlobalNamespace::BuilderUIResource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderUIResource*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderUIResource::BuilderUIResource()   {
}
