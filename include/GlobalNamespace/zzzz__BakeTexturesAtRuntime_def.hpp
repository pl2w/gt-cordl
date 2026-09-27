#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeTexturesAtRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakeTexturesAtRuntime)
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner_CreateAtlasesCoroutineResult;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BakeTexturesAtRuntime;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeTexturesAtRuntime*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeTexturesAtRuntime*, "", "BakeTexturesAtRuntime");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeTexturesAtRuntime
class CORDL_TYPE BakeTexturesAtRuntime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field elapsedTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedTime, put=__cordl_internal_set_elapsedTime)) float_t  elapsedTime;

/// @brief Field result, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  result;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Method GetShaderNameForPipeline, addr 0x9dfb9e0, size 0x8c, virtual false, abstract: false, final false
inline ::StringW GetShaderNameForPipeline() ;

static inline ::GlobalNamespace::BakeTexturesAtRuntime* New_ctor() ;

/// @brief Method OnBuiltAtlasesSuccess, addr 0x9dfc07c, size 0x1f8, virtual false, abstract: false, final false
inline void OnBuiltAtlasesSuccess() ;

/// @brief Method OnGUI, addr 0x9dfba6c, size 0x610, virtual false, abstract: false, final false
inline void OnGUI() ;

constexpr float_t const& __cordl_internal_get_elapsedTime() const;

constexpr float_t& __cordl_internal_get_elapsedTime() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult* const& __cordl_internal_get_result() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*& __cordl_internal_get_result() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_elapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_result(::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9dfc274, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeTexturesAtRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeTexturesAtRuntime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeTexturesAtRuntime(BakeTexturesAtRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeTexturesAtRuntime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeTexturesAtRuntime(BakeTexturesAtRuntime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32355};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

/// @brief Field elapsedTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___elapsedTime;

/// @brief Field result, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombiner_CreateAtlasesCoroutineResult*  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeTexturesAtRuntime, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeTexturesAtRuntime, ___elapsedTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakeTexturesAtRuntime, ___result) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeTexturesAtRuntime) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
