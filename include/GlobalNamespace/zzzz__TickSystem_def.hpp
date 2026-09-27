#pragma once
// IWYU pragma private; include "GlobalNamespace/TickSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TickSystem_1_def.hpp"
CORDL_MODULE_EXPORT(TickSystem)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class TickSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TickSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TickSystem*, "", "TickSystem");
// Dependencies TickSystem`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: TickSystem
class CORDL_TYPE TickSystem : public ::GlobalNamespace::TickSystem_1<::System::Object*> {
public:
// Declarations
static inline ::GlobalNamespace::TickSystem* New_ctor() ;

/// @brief Method .ctor, addr 0x5adc388, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TickSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TickSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TickSystem(TickSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TickSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TickSystem(TickSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TickSystem) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
