#pragma once
// IWYU pragma private; include "GlobalNamespace/DeltaTimeScaleProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(DeltaTimeScaleProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class DeltaTimeScaleProcessor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeltaTimeScaleProcessor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeltaTimeScaleProcessor*, "", "DeltaTimeScaleProcessor");
// Dependencies UnityEngine.InputSystem.InputProcessor`1<TValue>, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeltaTimeScaleProcessor
class CORDL_TYPE DeltaTimeScaleProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Initialize, addr 0xae85680, size 0x68, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GlobalNamespace::DeltaTimeScaleProcessor* New_ctor() ;

/// @brief Method Process, addr 0xae85650, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method .ctor, addr 0xae856e8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeltaTimeScaleProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeltaTimeScaleProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeltaTimeScaleProcessor(DeltaTimeScaleProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeltaTimeScaleProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeltaTimeScaleProcessor(DeltaTimeScaleProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DeltaTimeScaleProcessor) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
