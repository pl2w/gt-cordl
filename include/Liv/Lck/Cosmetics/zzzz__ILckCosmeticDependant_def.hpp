#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/ILckCosmeticDependant.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckCosmeticDependant)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class ILckCosmeticDependant;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::ILckCosmeticDependant*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::ILckCosmeticDependant*, "Liv.Lck.Cosmetics", "ILckCosmeticDependant");
// Dependencies 
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.ILckCosmeticDependant
class CORDL_TYPE ILckCosmeticDependant {
public:
// Declarations
 __declspec(property(get=get_PlayerId)) ::StringW  PlayerId;

/// @brief Method GetCosmeticType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetCosmeticType() ;

/// @brief Method OnCosmeticLoaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCosmeticLoaded(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  assets) ;

/// @brief Method get_PlayerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PlayerId() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCosmeticDependant", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCosmeticDependant(ILckCosmeticDependant const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24975};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Cosmetics
