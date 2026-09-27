#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityDataBase_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitEntityData)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class WitEntityData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::WitEntityData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitEntityData*, "Meta.WitAi.Data.Entities", "WitEntityData");
// Dependencies Meta.WitAi.Data.Entities.WitEntityDataBase`1<T>
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitEntityData
class CORDL_TYPE WitEntityData : public ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<::StringW> {
public:
// Declarations
/// @brief Method Equals, addr 0x9e9c008, size 0x38, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9e9c040, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::WitAi::Data::Entities::WitEntityData* New_ctor() ;

/// @brief [Preserve]
static inline ::Meta::WitAi::Data::Entities::WitEntityData* New_ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e9bf48, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e9bf90, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitEntityData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitEntityData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitEntityData(WitEntityData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitEntityData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitEntityData(WitEntityData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Data::Entities::WitEntityData) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities
