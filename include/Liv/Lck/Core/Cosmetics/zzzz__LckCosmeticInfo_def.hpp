#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckCosmeticInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckCosmeticInfo)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core::Cosmetics {
struct LckCosmeticInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo, "Liv.Lck.Core.Cosmetics", "LckCosmeticInfo");
// Dependencies 
namespace Liv::Lck::Core::Cosmetics {
// Is value type: true
// CS Name: Liv.Lck.Core.Cosmetics.LckCosmeticInfo
struct CORDL_TYPE LckCosmeticInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticInfo() ;

// Ctor Parameters [CppParam { name: "CosmeticId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CosmeticFilepath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CosmeticMetadata", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*", modifiers: "", def_value: None, comment: None }]
constexpr LckCosmeticInfo(::StringW  CosmeticId, ::StringW  CosmeticFilepath, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  CosmeticMetadata) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field CosmeticId, offset: 0x0, size: 0x8, def value: None
 ::StringW  CosmeticId;

/// @brief Field CosmeticFilepath, offset: 0x8, size: 0x8, def value: None
 ::StringW  CosmeticFilepath;

/// @brief Field CosmeticMetadata, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  CosmeticMetadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo, CosmeticId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo, CosmeticFilepath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo, CosmeticMetadata) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
