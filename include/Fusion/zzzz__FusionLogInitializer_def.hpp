#pragma once
// IWYU pragma private; include "Fusion/FusionLogInitializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FusionLogInitializer)
namespace Fusion {
class FusionUnityLogger;
}
// Forward declare root types
namespace Fusion {
class FusionLogInitializer;
}
// Write type traits
MARK_REF_T(::Fusion::FusionLogInitializer*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionLogInitializer*, "Fusion", "FusionLogInitializer");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionLogInitializer
class CORDL_TYPE FusionLogInitializer : public ::System::Object {
public:
// Declarations
/// @brief Method CreateLogger, addr 0x60e0fc4, size 0x70, virtual false, abstract: false, final false
static inline ::Fusion::FusionUnityLogger* CreateLogger(bool  isDarkMode) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Initialize, addr 0x60e103c, size 0xd0, virtual false, abstract: false, final false
static inline void Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionLogInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionLogInitializer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionLogInitializer(FusionLogInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionLogInitializer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionLogInitializer(FusionLogInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionLogInitializer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
