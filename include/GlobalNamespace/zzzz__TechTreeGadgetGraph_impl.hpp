#pragma once
// IWYU pragma private; include "GlobalNamespace/TechTreeGadgetGraph.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_impl.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_impl.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "XNode/zzzz__NodeGraph_impl.hpp"
#include "GlobalNamespace/zzzz__TechTreeGadgetGraph_def.hpp"
#include "GlobalNamespace/zzzz__GadgetNode_def.hpp"
#include "GlobalNamespace/zzzz__TechTreeGadgetGraph_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TechTreeGadgetGraph.get_GadgetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::GadgetNode>> (::GlobalNamespace::TechTreeGadgetGraph::*)()>(&::GlobalNamespace::TechTreeGadgetGraph::get_GadgetNodes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59d93f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {"get_GadgetNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TechTreeGadgetGraph.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TechTreeGadgetGraph::*)()>(&::GlobalNamespace::TechTreeGadgetGraph::get_IsValid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59d9514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TechTreeGadgetGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TechTreeGadgetGraph::*)()>(&::GlobalNamespace::TechTreeGadgetGraph::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_nickName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr ::StringW const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_nickName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nickName;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_nickName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nickName = value;
}
constexpr ::GlobalNamespace::SITechTreePageId& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_pageId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr ::GlobalNamespace::SITechTreePageId const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_pageId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pageId;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_pageId(::GlobalNamespace::SITechTreePageId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pageId = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___icon = value;
}
constexpr float_t& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_costMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costMultiplier;
}
constexpr float_t const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_costMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costMultiplier;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_costMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costMultiplier = value;
}
constexpr ::GlobalNamespace::ESuperGameModes& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_excludedGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr ::GlobalNamespace::ESuperGameModes const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_excludedGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludedGameModes;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludedGameModes = value;
}
constexpr ::GlobalNamespace::EAssetReleaseTier& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_releaseTier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTier;
}
constexpr ::GlobalNamespace::EAssetReleaseTier const& GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_get_releaseTier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTier;
}
constexpr void GlobalNamespace::TechTreeGadgetGraph::__cordl_internal_set_releaseTier(::GlobalNamespace::EAssetReleaseTier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseTier = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::GadgetNode>> GlobalNamespace::TechTreeGadgetGraph::get_GadgetNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {"get_GadgetNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::GadgetNode>>>(this, ___internal_method);
}
inline bool GlobalNamespace::TechTreeGadgetGraph::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TechTreeGadgetGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TechTreeGadgetGraph* GlobalNamespace::TechTreeGadgetGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TechTreeGadgetGraph*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TechTreeGadgetGraph::TechTreeGadgetGraph()   {
}
//  Writing Method size for method: ::GlobalNamespace::TechTreeGadgetGraph___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TechTreeGadgetGraph___c::*)()>(&::GlobalNamespace::TechTreeGadgetGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d95f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TechTreeGadgetGraph___c._get_GadgetNodes_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GadgetNode> (::GlobalNamespace::TechTreeGadgetGraph___c::*)(::XNode::Node*)>(&::GlobalNamespace::TechTreeGadgetGraph___c::_get_GadgetNodes_b__9_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59d95fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph___c*>(),
                        {"<get_GadgetNodes>b__9_0", {}, {::i2c::type_of<::XNode::Node*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TechTreeGadgetGraph___c::setStaticF___9(::GlobalNamespace::TechTreeGadgetGraph___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TechTreeGadgetGraph___c*, "<>9", ::GlobalNamespace::TechTreeGadgetGraph___c*>(std::forward<::GlobalNamespace::TechTreeGadgetGraph___c*>(value));
}
inline ::GlobalNamespace::TechTreeGadgetGraph___c* GlobalNamespace::TechTreeGadgetGraph___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TechTreeGadgetGraph___c*, "<>9", ::GlobalNamespace::TechTreeGadgetGraph___c*>();
}
inline void GlobalNamespace::TechTreeGadgetGraph___c::setStaticF___9__9_0(::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*, "<>9__9_0", ::GlobalNamespace::TechTreeGadgetGraph___c*>(std::forward<::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*>(value));
}
inline ::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>* GlobalNamespace::TechTreeGadgetGraph___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::XNode::Node>,::UnityW<::GlobalNamespace::GadgetNode>>*, "<>9__9_0", ::GlobalNamespace::TechTreeGadgetGraph___c*>();
}
inline void GlobalNamespace::TechTreeGadgetGraph___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GadgetNode> GlobalNamespace::TechTreeGadgetGraph___c::_get_GadgetNodes_b__9_0(::XNode::Node*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TechTreeGadgetGraph___c*>(),
                        {"<get_GadgetNodes>b__9_0", {}, {::i2c::type_of<::XNode::Node*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GadgetNode>>(this, ___internal_method, n);
}
inline ::GlobalNamespace::TechTreeGadgetGraph___c* GlobalNamespace::TechTreeGadgetGraph___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TechTreeGadgetGraph___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TechTreeGadgetGraph___c::TechTreeGadgetGraph___c()   {
}
