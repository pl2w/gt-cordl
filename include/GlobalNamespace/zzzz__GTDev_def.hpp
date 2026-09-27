#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDev.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDev)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTDev;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTDev*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDev*, "", "GTDev");
// [Extension]
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTDev
class CORDL_TYPE GTDev : public ::System::Object {
public:
// Declarations
/// @brief Field gDefaultColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_gDefaultColor, put=setStaticF_gDefaultColor)) ::UnityEngine::Color  gDefaultColor;

/// @brief Field gDevID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gDevID, put=setStaticF_gDevID)) int32_t  gDevID;

/// @brief Field gHasDevID, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_gHasDevID, put=setStaticF_gHasDevID)) bool  gHasDevID;

/// @brief Field gSphereMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSphereMesh, put=setStaticF_gSphereMesh)) ::UnityW<::UnityEngine::Mesh>  gSphereMesh;

/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method CallEditorOnly, addr 0x567663c, size 0x4, virtual false, abstract: false, final false
static inline void CallEditorOnly(::System::Action*  call) ;

/// @brief Method FetchDevID, addr 0x567617c, size 0x4c0, virtual false, abstract: false, final false
static inline int32_t FetchDevID() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)3)]
/// @brief Method InitializeOnLoad, addr 0x5676130, size 0x4c, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// [HideInCallstack]
/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Log(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Log(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogBetaOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogBetaOnly(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogBetaOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogBetaOnly(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogEditorOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogEditorOnly(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogEditorOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogEditorOnly(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogError(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogError(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorBeta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogErrorBeta(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("BETA")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorBeta, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogErrorBeta(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorEd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogErrorEd(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogErrorEd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogErrorEd(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogSilent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogSilent(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogSilent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogSilent(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogWarning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogWarning(T  msg, ::StringW  channel) ;

/// [HideInCallstack]
/// @brief Method LogWarning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void LogWarning(T  msg, ::UnityEngine::Object*  context, ::StringW  channel) ;

/// [Extension]
/// [Conditional("_GTDEV_ON_")]
/// @brief Method Ping3D, addr 0x5676798, size 0x6f8, virtual false, abstract: false, final false
static inline void Ping3D(::UnityEngine::Collider*  col, ::UnityEngine::Color  color, float_t  duration) ;

/// [Extension]
/// [Conditional("_GTDEV_ON_")]
/// @brief Method Ping3D, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Ping3D(T  value, ::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  duration) ;

/// [Extension]
/// [Conditional("_GTDEV_ON_")]
/// @brief Method Ping3D, addr 0x5676e90, size 0x444, virtual false, abstract: false, final false
static inline void Ping3D(::UnityEngine::Vector3  vec, ::UnityEngine::Color  color, float_t  duration) ;

/// @brief Method SphereMesh, addr 0x567668c, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SphereMesh() ;

/// [HideInCallstack]
/// [Conditional("_GTDEV_ON_")]
/// @brief Method _Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void _Log(::System::Action_2<::System::Object*,::UnityW<::UnityEngine::Object>>*  log, ::System::Action_1<::System::Object*>*  logNoCtx, T  msg, ::UnityEngine::Object*  ctx, ::StringW  channel) ;

static inline ::UnityEngine::Color getStaticF_gDefaultColor() ;

static inline int32_t getStaticF_gDevID() ;

static inline bool getStaticF_gHasDevID() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_gSphereMesh() ;

/// @brief Method get_DevID, addr 0x5676640, size 0x4c, virtual false, abstract: false, final false
static inline int32_t get_DevID() ;

static inline void setStaticF_gDefaultColor(::UnityEngine::Color  value) ;

static inline void setStaticF_gDevID(int32_t  value) ;

static inline void setStaticF_gHasDevID(bool  value) ;

static inline void setStaticF_gSphereMesh(::UnityW<::UnityEngine::Mesh>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTDev() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTDev", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTDev(GTDev && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTDev", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTDev(GTDev const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{841};

/// @brief Field kDuration offset 0xffffffff size 0x4
static constexpr float_t  kDuration{static_cast<float_t>(8.0f)};

/// @brief Field kFormatF offset 0xffffffff size 0x8
static constexpr ::ConstString  kFormatF{u"{{ X: {0:##0.0000}, Y: {1:##0.0000}, Z: {2:##0.0000} }}"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTDev) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
