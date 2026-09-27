#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
CORDL_MODULE_EXPORT(StaticBatchingUtility)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class StaticBatchingUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::StaticBatchingUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::StaticBatchingUtility*, "UnityEngine", "StaticBatchingUtility");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.StaticBatchingUtility
class CORDL_TYPE StaticBatchingUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_CombineMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CombineMarker, put=setStaticF_s_CombineMarker)) ::Unity::Profiling::ProfilerMarker  s_CombineMarker;

/// @brief Method Combine, addr 0xb5ec938, size 0xf8, virtual false, abstract: false, final false
static inline void Combine(::UnityEngine::GameObject*  staticBatchRoot) ;

/// @brief Method CombineRoot, addr 0xb5eca30, size 0x1e4, virtual false, abstract: false, final false
static inline void CombineRoot(::UnityEngine::GameObject*  staticBatchRoot) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_CombineMarker() ;

static inline void setStaticF_s_CombineMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticBatchingUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchingUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticBatchingUtility(StaticBatchingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchingUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticBatchingUtility(StaticBatchingUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::StaticBatchingUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
