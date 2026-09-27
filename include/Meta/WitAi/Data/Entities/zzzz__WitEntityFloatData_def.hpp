#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityFloatData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityDataBase_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitEntityFloatData)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class WitEntityFloatData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::WitEntityFloatData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitEntityFloatData*, "Meta.WitAi.Data.Entities", "WitEntityFloatData");
// Dependencies Meta.WitAi.Data.Entities.WitEntityDataBase`1<T>
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitEntityFloatData
class CORDL_TYPE WitEntityFloatData : public ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<float_t> {
public:
// Declarations
/// @brief Method Equals, addr 0x9e9c108, size 0x54, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x9e9c15c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::WitAi::Data::Entities::WitEntityFloatData* New_ctor() ;

/// @brief [Preserve]
static inline ::Meta::WitAi::Data::Entities::WitEntityFloatData* New_ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e9c048, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e9c090, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitEntityFloatData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitEntityFloatData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitEntityFloatData(WitEntityFloatData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitEntityFloatData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitEntityFloatData(WitEntityFloatData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Data::Entities::WitEntityFloatData) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities
