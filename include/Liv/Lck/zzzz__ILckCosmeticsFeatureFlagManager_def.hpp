#pragma once
// IWYU pragma private; include "Liv/Lck/ILckCosmeticsFeatureFlagManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckCosmeticsFeatureFlagManager)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Liv::Lck {
class ILckCosmeticsFeatureFlagManager;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckCosmeticsFeatureFlagManager*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckCosmeticsFeatureFlagManager*, "Liv.Lck", "ILckCosmeticsFeatureFlagManager");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckCosmeticsFeatureFlagManager
class CORDL_TYPE ILckCosmeticsFeatureFlagManager {
public:
// Declarations
/// @brief Method IsEnabledAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<bool>* IsEnabledAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCosmeticsFeatureFlagManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCosmeticsFeatureFlagManager(ILckCosmeticsFeatureFlagManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
