#pragma once
// IWYU pragma private; include "Liv/Lck/ILckQualityConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckQualityConfig)
namespace Liv::Lck {
struct QualityOption;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck {
class ILckQualityConfig;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckQualityConfig*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckQualityConfig*, "Liv.Lck", "ILckQualityConfig");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckQualityConfig
class CORDL_TYPE ILckQualityConfig {
public:
// Declarations
/// @brief Method GetQualityOptionsForSystem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* GetQualityOptionsForSystem() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckQualityConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckQualityConfig(ILckQualityConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24785};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
