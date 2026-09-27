#pragma once
// IWYU pragma private; include "Pathfinding/Funnel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__Funnel_def.hpp"
#include "Pathfinding/zzzz__Funnel_FunnelPortals_def.hpp"
#include "Pathfinding/zzzz__Funnel_PathPart_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Funnel.SplitIntoParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::Funnel_PathPart>* (*)(::Pathfinding::Path*)>(&::Pathfinding::Funnel::SplitIntoParts)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x5eb5a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"SplitIntoParts", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.ConstructFunnelPortals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Funnel_FunnelPortals (*)(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, ::GlobalNamespace::Funnel_PathPart)>(&::Pathfinding::Funnel::ConstructFunnelPortals)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x5eb60c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ConstructFunnelPortals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::GlobalNamespace::Funnel_PathPart>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.ShrinkPortals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Funnel_FunnelPortals, float_t)>(&::Pathfinding::Funnel::ShrinkPortals)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5eb66f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ShrinkPortals", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.UnwrapHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::Funnel::UnwrapHelper)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5eb6914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"UnwrapHelper", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.Unwrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Funnel_FunnelPortals, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector2>)>(&::Pathfinding::Funnel::Unwrap)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5eb6b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Unwrap", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.FixFunnel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::Pathfinding::Funnel::FixFunnel)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5eb70d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"FixFunnel", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.ToXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::Pathfinding::Funnel::ToXZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb720c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ToXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.FromXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::Pathfinding::Funnel::FromXZ)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5eb7214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"FromXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.RightOrColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::Funnel::RightOrColinear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eb7220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.LeftOrColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::Funnel::LeftOrColinear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eb7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"LeftOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.Calculate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(::GlobalNamespace::Funnel_FunnelPortals, bool, bool)>(&::Pathfinding::Funnel::Calculate)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x5eb7250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Calculate", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel.Calculate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t, ::System::Collections::Generic::List_1<int32_t>*, int32_t, ::by_ref<bool>)>(&::Pathfinding::Funnel::Calculate)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5eb79ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Calculate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Funnel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Funnel::*)()>(&::Pathfinding::Funnel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eb7e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::GlobalNamespace::Funnel_PathPart>* Pathfinding::Funnel::SplitIntoParts(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"SplitIntoParts", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::Funnel_PathPart>*>(nullptr, ___internal_method, path);
}
inline ::GlobalNamespace::Funnel_FunnelPortals Pathfinding::Funnel::ConstructFunnelPortals(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, ::GlobalNamespace::Funnel_PathPart  part)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ConstructFunnelPortals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<::GlobalNamespace::Funnel_PathPart>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Funnel_FunnelPortals>(nullptr, ___internal_method, nodes, part);
}
inline void Pathfinding::Funnel::ShrinkPortals(::GlobalNamespace::Funnel_FunnelPortals  portals, float_t  shrink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ShrinkPortals", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, portals, shrink);
}
inline bool Pathfinding::Funnel::UnwrapHelper(::UnityEngine::Vector3  portalStart, ::UnityEngine::Vector3  portalEnd, ::UnityEngine::Vector3  prevPoint, ::UnityEngine::Vector3  nextPoint, ::by_ref<::UnityEngine::Quaternion>  mRot, ::by_ref<::UnityEngine::Vector3>  mOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"UnwrapHelper", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, portalStart, portalEnd, prevPoint, nextPoint, mRot, mOffset);
}
inline void Pathfinding::Funnel::Unwrap(::GlobalNamespace::Funnel_FunnelPortals  funnel, ::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Unwrap", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, funnel, left, right);
}
inline int32_t Pathfinding::Funnel::FixFunnel(::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right, int32_t  numPortals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"FixFunnel", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, left, right, numPortals);
}
inline ::UnityEngine::Vector2 Pathfinding::Funnel::ToXZ(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"ToXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::Vector3 Pathfinding::Funnel::FromXZ(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"FromXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p);
}
inline bool Pathfinding::Funnel::RightOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Pathfinding::Funnel::LeftOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"LeftOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Pathfinding::Funnel::Calculate(::GlobalNamespace::Funnel_FunnelPortals  funnel, bool  unwrap, bool  splitAtEveryPortal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Calculate", {}, {::i2c::type_of<::GlobalNamespace::Funnel_FunnelPortals>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method, funnel, unwrap, splitAtEveryPortal);
}
inline void Pathfinding::Funnel::Calculate(::ArrayW<::UnityEngine::Vector2>  left, ::ArrayW<::UnityEngine::Vector2>  right, int32_t  numPortals, int32_t  startIndex, ::System::Collections::Generic::List_1<int32_t>*  funnelPath, int32_t  maxCorners, ::by_ref<bool>  lastCorner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {"Calculate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, left, right, numPortals, startIndex, funnelPath, maxCorners, lastCorner);
}
inline void Pathfinding::Funnel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Funnel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Funnel* Pathfinding::Funnel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Funnel*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Funnel::Funnel()   {
}
