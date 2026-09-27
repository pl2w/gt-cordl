#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBiomeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CrittersBiomeExtensions)
namespace GlobalNamespace {
struct CrittersBiome;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersBiomeExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersBiomeExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersBiomeExtensions*, "", "CrittersBiomeExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersBiomeExtensions
class CORDL_TYPE CrittersBiomeExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field _allScannableBiomes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allScannableBiomes, put=setStaticF__allScannableBiomes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  _allScannableBiomes;

/// @brief Field _habitatBiomes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__habitatBiomes, put=setStaticF__habitatBiomes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  _habitatBiomes;

/// @brief Field _habitatLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__habitatLookup, put=setStaticF__habitatLookup)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*  _habitatLookup;

/// [Extension]
/// @brief Method GetHabitatDescription, addr 0x55fcb90, size 0x39c, virtual false, abstract: false, final false
static inline ::StringW GetHabitatDescription(::GlobalNamespace::CrittersBiome  biome) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>* getStaticF__allScannableBiomes() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>* getStaticF__habitatBiomes() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>* getStaticF__habitatLookup() ;

static inline void setStaticF__allScannableBiomes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  value) ;

static inline void setStaticF__habitatBiomes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  value) ;

static inline void setStaticF__habitatLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersBiomeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersBiomeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersBiomeExtensions(CrittersBiomeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersBiomeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersBiomeExtensions(CrittersBiomeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{89};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CrittersBiomeExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
