#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceNode_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceNode::*)()>(&::GlobalNamespace::SIResourceNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIResource>& GlobalNamespace::SIResourceNode::__cordl_internal_get_resourcePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIResource> const& GlobalNamespace::SIResourceNode::__cordl_internal_get_resourcePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePrefab;
}
constexpr void GlobalNamespace::SIResourceNode::__cordl_internal_set_resourcePrefab(::UnityW<::GlobalNamespace::SIResource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourcePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SIResourceNode::__cordl_internal_get_activeResource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeResource;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SIResourceNode::__cordl_internal_get_activeResource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeResource;
}
constexpr void GlobalNamespace::SIResourceNode::__cordl_internal_set_activeResource(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeResource = value;
}
inline void GlobalNamespace::SIResourceNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResourceNode* GlobalNamespace::SIResourceNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceNode::SIResourceNode()   {
}
