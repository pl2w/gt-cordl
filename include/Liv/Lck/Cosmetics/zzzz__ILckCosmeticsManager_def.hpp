#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/ILckCosmeticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckCosmeticsManager)
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependant;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class ILckCosmeticsManager;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::ILckCosmeticsManager*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::ILckCosmeticsManager*, "Liv.Lck.Cosmetics", "ILckCosmeticsManager");
// Dependencies 
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.ILckCosmeticsManager
class CORDL_TYPE ILckCosmeticsManager {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method RegisterDependant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RegisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant) ;

/// @brief Method UnregisterDependant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnregisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckCosmeticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCosmeticsManager(ILckCosmeticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24976};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Cosmetics
