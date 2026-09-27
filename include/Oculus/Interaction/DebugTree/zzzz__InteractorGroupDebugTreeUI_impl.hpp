#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/InteractorGroupDebugTreeUI.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_impl.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_impl.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__InteractorGroupDebugTreeUI_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__INodeUI_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__InteractorGroupDebugTreeUI_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractor* (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::*)()>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::get_Value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b1cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI.get_NodePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>* (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::*)()>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::get_NodePrefab)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b1d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI.CreateTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IInteractor*>* (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::CreateTree)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4b1d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI.TitleForValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::TitleForValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4b1e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::*)()>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4b1f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_set__root(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::UnityW<::UnityEngine::Component>& Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_get__nodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodePrefab;
}
constexpr ::UnityW<::UnityEngine::Component> const& Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_get__nodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodePrefab;
}
constexpr void Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::__cordl_internal_set__nodePrefab(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodePrefab = value;
}
inline ::Oculus::Interaction::IInteractor* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractor*>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::get_NodePrefab()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IInteractor*>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IInteractor*>* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::CreateTree(::Oculus::Interaction::IInteractor*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IInteractor*>*>(this, ___internal_method, value);
}
inline ::StringW Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::TitleForValue(::Oculus::Interaction::IInteractor*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI::InteractorGroupDebugTreeUI()   {
}
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4b1de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree.TryGetChildrenAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractor*>*>* (::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::TryGetChildrenAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa4b1f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(),
                    {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::_ctor(::Oculus::Interaction::IInteractor*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractor*>*>* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::TryGetChildrenAsync(::Oculus::Interaction::IInteractor*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractor*>*>*>(this, ___internal_method, node);
}
inline ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree* Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::New_ctor(::Oculus::Interaction::IInteractor*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree*>(root));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree::InteractorGroupDebugTreeUI_InteractorGroupDebugTree()   {
}
