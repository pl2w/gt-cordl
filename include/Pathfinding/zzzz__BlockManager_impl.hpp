#pragma once
// IWYU pragma private; include "Pathfinding/BlockManager.hpp"
#include "Pathfinding/zzzz__BlockManager_BlockMode_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__BlockManager_def.hpp"
#include "Pathfinding/zzzz__BlockManager_BlockMode_def.hpp"
#include "Pathfinding/zzzz__BlockManager_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__ITraversalProvider_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__SingleNodeBlocker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::BlockManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager::*)()>(&::Pathfinding::BlockManager::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5eb2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager.NodeContainsAnyOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::BlockManager::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*)>(&::Pathfinding::BlockManager::NodeContainsAnyOf)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5eb2668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"NodeContainsAnyOf", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager.NodeContainsAnyExcept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::BlockManager::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*)>(&::Pathfinding::BlockManager::NodeContainsAnyExcept)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5eb2780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"NodeContainsAnyExcept", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager.InternalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager::*)(::Pathfinding::GraphNode*, ::Pathfinding::SingleNodeBlocker*)>(&::Pathfinding::BlockManager::InternalBlock)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5eb28a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"InternalBlock", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::SingleNodeBlocker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager.InternalUnblock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager::*)(::Pathfinding::GraphNode*, ::Pathfinding::SingleNodeBlocker*)>(&::Pathfinding::BlockManager::InternalUnblock)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5eb2a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"InternalUnblock", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::SingleNodeBlocker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager::*)()>(&::Pathfinding::BlockManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5eb2b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*& Pathfinding::BlockManager::__cordl_internal_get_blocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocked;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>* const& Pathfinding::BlockManager::__cordl_internal_get_blocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocked;
}
constexpr void Pathfinding::BlockManager::__cordl_internal_set_blocked(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocked = value;
}
inline void Pathfinding::BlockManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::BlockManager::NodeContainsAnyOf(::Pathfinding::GraphNode*  node, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"NodeContainsAnyOf", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, selector);
}
inline bool Pathfinding::BlockManager::NodeContainsAnyExcept(::Pathfinding::GraphNode*  node, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"NodeContainsAnyExcept", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, selector);
}
inline void Pathfinding::BlockManager::InternalBlock(::Pathfinding::GraphNode*  node, ::Pathfinding::SingleNodeBlocker*  blocker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"InternalBlock", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::SingleNodeBlocker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, blocker);
}
inline void Pathfinding::BlockManager::InternalUnblock(::Pathfinding::GraphNode*  node, ::Pathfinding::SingleNodeBlocker*  blocker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {"InternalUnblock", {}, {::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::SingleNodeBlocker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, blocker);
}
inline void Pathfinding::BlockManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::BlockManager* Pathfinding::BlockManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BlockManager*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::BlockManager::BlockManager()   {
}
//  Writing Method size for method: ::Pathfinding::BlockManager___c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager___c__DisplayClass7_0::*)()>(&::Pathfinding::BlockManager___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb2b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager___c__DisplayClass7_0._InternalUnblock_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager___c__DisplayClass7_0::*)()>(&::Pathfinding::BlockManager___c__DisplayClass7_0::_InternalUnblock_b__0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5eb2f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass7_0*>(),
                        {"<InternalUnblock>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::BlockManager>& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::BlockManager> const& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_set___4__this(::UnityW<::Pathfinding::BlockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get_blocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_get_blocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass7_0::__cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocker = value;
}
inline void Pathfinding::BlockManager___c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass7_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BlockManager___c__DisplayClass7_0::_InternalUnblock_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass7_0*>(),
                        {"<InternalUnblock>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::BlockManager___c__DisplayClass7_0* Pathfinding::BlockManager___c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BlockManager___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::BlockManager___c__DisplayClass7_0::BlockManager___c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::Pathfinding::BlockManager___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager___c__DisplayClass6_0::*)()>(&::Pathfinding::BlockManager___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb29fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager___c__DisplayClass6_0._InternalBlock_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager___c__DisplayClass6_0::*)()>(&::Pathfinding::BlockManager___c__DisplayClass6_0::_InternalBlock_b__0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5eb2df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass6_0*>(),
                        {"<InternalBlock>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::BlockManager>& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::BlockManager> const& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_set___4__this(::UnityW<::Pathfinding::BlockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get_blocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_get_blocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocker;
}
constexpr void Pathfinding::BlockManager___c__DisplayClass6_0::__cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocker = value;
}
inline void Pathfinding::BlockManager___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::BlockManager___c__DisplayClass6_0::_InternalBlock_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager___c__DisplayClass6_0*>(),
                        {"<InternalBlock>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::BlockManager___c__DisplayClass6_0* Pathfinding::BlockManager___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BlockManager___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::BlockManager___c__DisplayClass6_0::BlockManager___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Pathfinding::BlockManager_TraversalProvider.get_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BlockManager_BlockMode (::Pathfinding::BlockManager_TraversalProvider::*)()>(&::Pathfinding::BlockManager_TraversalProvider::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb2bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"get_mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager_TraversalProvider.set_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager_TraversalProvider::*)(::GlobalNamespace::BlockManager_BlockMode)>(&::Pathfinding::BlockManager_TraversalProvider::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb2bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::BlockManager_BlockMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager_TraversalProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::BlockManager_TraversalProvider::*)(::Pathfinding::BlockManager*, ::GlobalNamespace::BlockManager_BlockMode, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*)>(&::Pathfinding::BlockManager_TraversalProvider::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5eb2bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::BlockManager*>(), ::i2c::type_of<::GlobalNamespace::BlockManager_BlockMode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager_TraversalProvider.CanTraverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::BlockManager_TraversalProvider::*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::BlockManager_TraversalProvider::CanTraverse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5eb2d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::BlockManager_TraversalProvider.GetTraversalCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::BlockManager_TraversalProvider::*)(::Pathfinding::Path*, ::Pathfinding::GraphNode*)>(&::Pathfinding::BlockManager_TraversalProvider::GetTraversalCost)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5eb2dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::BlockManager>& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get_blockManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockManager;
}
constexpr ::UnityW<::Pathfinding::BlockManager> const& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get_blockManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockManager;
}
constexpr void Pathfinding::BlockManager_TraversalProvider::__cordl_internal_set_blockManager(::UnityW<::Pathfinding::BlockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockManager = value;
}
constexpr ::GlobalNamespace::BlockManager_BlockMode& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get__mode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode_k__BackingField;
}
constexpr ::GlobalNamespace::BlockManager_BlockMode const& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get__mode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode_k__BackingField;
}
constexpr void Pathfinding::BlockManager_TraversalProvider::__cordl_internal_set__mode_k__BackingField(::GlobalNamespace::BlockManager_BlockMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>* const& Pathfinding::BlockManager_TraversalProvider::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void Pathfinding::BlockManager_TraversalProvider::__cordl_internal_set_selector(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
inline ::GlobalNamespace::BlockManager_BlockMode Pathfinding::BlockManager_TraversalProvider::get_mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"get_mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BlockManager_BlockMode>(this, ___internal_method);
}
inline void Pathfinding::BlockManager_TraversalProvider::set_mode(::GlobalNamespace::BlockManager_BlockMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::BlockManager_BlockMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::BlockManager_TraversalProvider::_ctor(::Pathfinding::BlockManager*  blockManager, ::GlobalNamespace::BlockManager_BlockMode  mode, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::BlockManager*>(), ::i2c::type_of<::GlobalNamespace::BlockManager_BlockMode>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockManager, mode, selector);
}
inline bool Pathfinding::BlockManager_TraversalProvider::CanTraverse(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path, node);
}
inline uint32_t Pathfinding::BlockManager_TraversalProvider::GetTraversalCost(::Pathfinding::Path*  path, ::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::BlockManager_TraversalProvider*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, path, node);
}
inline ::Pathfinding::BlockManager_TraversalProvider* Pathfinding::BlockManager_TraversalProvider::New_ctor(::Pathfinding::BlockManager*  blockManager, ::GlobalNamespace::BlockManager_BlockMode  mode, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  selector)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::BlockManager_TraversalProvider*>(blockManager, mode, selector));
}
/// @brief Convert operator to "::Pathfinding::ITraversalProvider"
constexpr  Pathfinding::BlockManager_TraversalProvider::operator ::Pathfinding::ITraversalProvider*() noexcept {
return static_cast<::Pathfinding::ITraversalProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::ITraversalProvider"
constexpr ::Pathfinding::ITraversalProvider* Pathfinding::BlockManager_TraversalProvider::i___Pathfinding__ITraversalProvider() noexcept {
return static_cast<::Pathfinding::ITraversalProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::BlockManager_TraversalProvider::BlockManager_TraversalProvider()   {
}
