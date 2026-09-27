#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerVisibilityExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerVisibilityExtensions_def.hpp"
#include "Fusion/zzzz__NetworkRunnerVisibilityExtensions_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.ResetAllSimulationStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerVisibilityExtensions::ResetAllSimulationStatics)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60e7020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"ResetAllSimulationStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.RetryRefreshCommonLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerVisibilityExtensions::RetryRefreshCommonLinks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60e74b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RetryRefreshCommonLinks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.EnableVisibilityExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::EnableVisibilityExtension)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60e7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"EnableVisibilityExtension", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.DisableVisibilityExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::DisableVisibilityExtension)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60e7c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"DisableVisibilityExtension", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.HasVisibilityEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::HasVisibilityEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e7d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"HasVisibilityEnabled", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.GetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::GetVisible)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60e7dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisible", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.SetVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, bool)>(&::Fusion::NetworkRunnerVisibilityExtensions::SetVisible)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e7eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"SetVisible", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.GetVisibilityNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>* (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::GetVisibilityNodes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60e81cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisibilityNodes", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.GetVisibilityInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility* (*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerVisibilityExtensions::GetVisibilityInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60e7f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisibilityInfo", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.AddVisibilityNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, ::UnityEngine::GameObject*)>(&::Fusion::NetworkRunnerVisibilityExtensions::AddVisibilityNodes)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x60e8268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"AddVisibilityNodes", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.CollectBehavioursAndAddNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*)>(&::Fusion::NetworkRunnerVisibilityExtensions::CollectBehavioursAndAddNodes)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x60e87a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"CollectBehavioursAndAddNodes", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.IsRecognizedByRunnerVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkRunnerVisibilityExtensions::IsRecognizedByRunnerVisibility)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60e8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"IsRecognizedByRunnerVisibility", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.RegisterNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::RunnerVisibilityLink*, ::Fusion::NetworkRunner*, ::UnityEngine::Component*)>(&::Fusion::NetworkRunnerVisibilityExtensions::RegisterNode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60e8cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RegisterNode", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>(), ::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.UnregisterNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::RunnerVisibilityLink*)>(&::Fusion::NetworkRunnerVisibilityExtensions::UnregisterNode)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x60e91ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"UnregisterNode", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.AddNodeToCommonLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::RunnerVisibilityLink*)>(&::Fusion::NetworkRunnerVisibilityExtensions::AddNodeToCommonLookup)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x60e8b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"AddNodeToCommonLookup", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.RefreshRunnerVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkRunner*, bool)>(&::Fusion::NetworkRunnerVisibilityExtensions::RefreshRunnerVisibility)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x60e7fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RefreshRunnerVisibility", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.RefreshCommonObjectVisibilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerVisibilityExtensions::RefreshCommonObjectVisibilities)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x60e7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RefreshCommonObjectVisibilities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkRunnerVisibilityExtensions::ResetStatics)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60e706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunnerVisibilityExtensions::setStaticF_RecognizedBehaviourNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "RecognizedBehaviourNames", ::Fusion::NetworkRunnerVisibilityExtensions*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Fusion::NetworkRunnerVisibilityExtensions::getStaticF_RecognizedBehaviourNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "RecognizedBehaviourNames", ::Fusion::NetworkRunnerVisibilityExtensions*>();
}
inline void Fusion::NetworkRunnerVisibilityExtensions::setStaticF_RecognizedBehaviourTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "RecognizedBehaviourTypes", ::Fusion::NetworkRunnerVisibilityExtensions*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> Fusion::NetworkRunnerVisibilityExtensions::getStaticF_RecognizedBehaviourTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "RecognizedBehaviourTypes", ::Fusion::NetworkRunnerVisibilityExtensions*>();
}
inline void Fusion::NetworkRunnerVisibilityExtensions::setStaticF_DictionaryLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*, "DictionaryLookup", ::Fusion::NetworkRunnerVisibilityExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>* Fusion::NetworkRunnerVisibilityExtensions::getStaticF_DictionaryLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*, "DictionaryLookup", ::Fusion::NetworkRunnerVisibilityExtensions*>();
}
inline void Fusion::NetworkRunnerVisibilityExtensions::setStaticF__commonLinksWithMissingInputAuthNeedRefresh(bool  value)  {
::cordl_internals::setStaticField<bool, "_commonLinksWithMissingInputAuthNeedRefresh", ::Fusion::NetworkRunnerVisibilityExtensions*>(std::forward<bool>(value));
}
inline bool Fusion::NetworkRunnerVisibilityExtensions::getStaticF__commonLinksWithMissingInputAuthNeedRefresh()  {
return ::cordl_internals::getStaticField<bool, "_commonLinksWithMissingInputAuthNeedRefresh", ::Fusion::NetworkRunnerVisibilityExtensions*>();
}
inline void Fusion::NetworkRunnerVisibilityExtensions::setStaticF_CommonObjectLookup(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*, "CommonObjectLookup", ::Fusion::NetworkRunnerVisibilityExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>* Fusion::NetworkRunnerVisibilityExtensions::getStaticF_CommonObjectLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*, "CommonObjectLookup", ::Fusion::NetworkRunnerVisibilityExtensions*>();
}
inline void Fusion::NetworkRunnerVisibilityExtensions::ResetAllSimulationStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"ResetAllSimulationStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::RetryRefreshCommonLinks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RetryRefreshCommonLinks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::EnableVisibilityExtension(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"EnableVisibilityExtension", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::DisableVisibilityExtension(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"DisableVisibilityExtension", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner);
}
inline bool Fusion::NetworkRunnerVisibilityExtensions::HasVisibilityEnabled(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"HasVisibilityEnabled", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runner);
}
inline bool Fusion::NetworkRunnerVisibilityExtensions::GetVisible(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisible", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::SetVisible(::Fusion::NetworkRunner*  runner, bool  isVisibile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"SetVisible", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, isVisibile);
}
inline ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>* Fusion::NetworkRunnerVisibilityExtensions::GetVisibilityNodes(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisibilityNodes", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>(nullptr, ___internal_method, runner);
}
inline ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility* Fusion::NetworkRunnerVisibilityExtensions::GetVisibilityInfo(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"GetVisibilityInfo", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(nullptr, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::AddVisibilityNodes(::Fusion::NetworkRunner*  runner, ::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"AddVisibilityNodes", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, go);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::CollectBehavioursAndAddNodes(::UnityEngine::GameObject*  go, ::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  existingNodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"CollectBehavioursAndAddNodes", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go, runner, existingNodes);
}
inline bool Fusion::NetworkRunnerVisibilityExtensions::IsRecognizedByRunnerVisibility(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"IsRecognizedByRunnerVisibility", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::RegisterNode(::Fusion::RunnerVisibilityLink*  link, ::Fusion::NetworkRunner*  runner, ::UnityEngine::Component*  comp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RegisterNode", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>(), ::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link, runner, comp);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::UnregisterNode(::Fusion::RunnerVisibilityLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"UnregisterNode", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::AddNodeToCommonLookup(::Fusion::RunnerVisibilityLink*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"AddNodeToCommonLookup", {}, {::i2c::type_of<::Fusion::RunnerVisibilityLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, link);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::RefreshRunnerVisibility(::Fusion::NetworkRunner*  runner, bool  refreshCommonObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RefreshRunnerVisibility", {}, {::i2c::type_of<::Fusion::NetworkRunner*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runner, refreshCommonObjects);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::RefreshCommonObjectVisibilities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"RefreshCommonObjectVisibilities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::NetworkRunnerVisibilityExtensions::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerVisibilityExtensions::NetworkRunnerVisibilityExtensions()   {
}
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::*)()>(&::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e96f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::*)(bool)>(&::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::set_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::*)()>(&::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60e7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_get__IsVisible_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisible_k__BackingField;
}
constexpr bool const& Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_get__IsVisible_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsVisible_k__BackingField;
}
constexpr void Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_set__IsVisible_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsVisible_k__BackingField = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*& Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_get_Nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nodes;
}
constexpr ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>* const& Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_get_Nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Nodes;
}
constexpr void Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::__cordl_internal_set_Nodes(::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Nodes = value;
}
inline bool Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility* Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility::NetworkRunnerVisibilityExtensions_RunnerVisibility()   {
}
