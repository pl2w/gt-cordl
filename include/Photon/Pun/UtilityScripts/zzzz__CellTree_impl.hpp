#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTree_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTree.get_RootNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Pun::UtilityScripts::CellTreeNode* (::Photon::Pun::UtilityScripts::CellTree::*)()>(&::Photon::Pun::UtilityScripts::CellTree::get_RootNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {"get_RootNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTree.set_RootNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTree::*)(::Photon::Pun::UtilityScripts::CellTreeNode*)>(&::Photon::Pun::UtilityScripts::CellTree::set_RootNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {"set_RootNode", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTree::*)()>(&::Photon::Pun::UtilityScripts::CellTree::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72fd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::CellTree::*)(::Photon::Pun::UtilityScripts::CellTreeNode*)>(&::Photon::Pun::UtilityScripts::CellTree::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa72f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& Photon::Pun::UtilityScripts::CellTree::__cordl_internal_get__RootNode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootNode_k__BackingField;
}
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode* const& Photon::Pun::UtilityScripts::CellTree::__cordl_internal_get__RootNode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RootNode_k__BackingField;
}
constexpr void Photon::Pun::UtilityScripts::CellTree::__cordl_internal_set__RootNode_k__BackingField(::Photon::Pun::UtilityScripts::CellTreeNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RootNode_k__BackingField = value;
}
inline ::Photon::Pun::UtilityScripts::CellTreeNode* Photon::Pun::UtilityScripts::CellTree::get_RootNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {"get_RootNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Pun::UtilityScripts::CellTreeNode*>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CellTree::set_RootNode(::Photon::Pun::UtilityScripts::CellTreeNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {"set_RootNode", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::CellTree::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CellTree::_ctor(::Photon::Pun::UtilityScripts::CellTreeNode*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::CellTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::CellTreeNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::Photon::Pun::UtilityScripts::CellTree* Photon::Pun::UtilityScripts::CellTree::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CellTree*>());
}
inline ::Photon::Pun::UtilityScripts::CellTree* Photon::Pun::UtilityScripts::CellTree::New_ctor(::Photon::Pun::UtilityScripts::CellTreeNode*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::CellTree*>(root));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CellTree::CellTree()   {
}
