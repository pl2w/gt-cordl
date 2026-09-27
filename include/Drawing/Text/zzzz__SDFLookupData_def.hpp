#pragma once
// IWYU pragma private; include "Drawing/Text/SDFLookupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/Text/zzzz__SDFCharacter_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFLookupData)
namespace Drawing::Text {
struct SDFFont;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Drawing::Text {
struct SDFLookupData;
}
// Write type traits
MARK_VAL_T(::Drawing::Text::SDFLookupData);
DEFINE_IL2CPP_CLASS(::Drawing::Text::SDFLookupData, "Drawing.Text", "SDFLookupData");
// Dependencies Drawing.Text.SDFCharacter, Unity.Collections.NativeArray`1<T>
namespace Drawing::Text {
// Is value type: true
// CS Name: Drawing.Text.SDFLookupData
struct CORDL_TYPE SDFLookupData {
public:
// Declarations
/// @brief Method Dispose, addr 0x55dc82c, size 0x68, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetIndex, addr 0x55dc778, size 0xb4, virtual false, abstract: false, final false
inline int32_t GetIndex(char16_t  c) ;

/// @brief Method .ctor, addr 0x55dc4d8, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::Drawing::Text::SDFFont  font) ;

// Ctor Parameters []
// @brief default ctor
constexpr SDFLookupData() ;

// Ctor Parameters [CppParam { name: "characters", ty: "::Unity::Collections::NativeArray_1<::Drawing::Text::SDFCharacter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lookup", ty: "::System::Collections::Generic::Dictionary_2<char16_t,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }]
constexpr SDFLookupData(::Unity::Collections::NativeArray_1<::Drawing::Text::SDFCharacter>  characters, ::System::Collections::Generic::Dictionary_2<char16_t,int32_t>*  lookup, ::UnityW<::UnityEngine::Material>  material) noexcept;

/// @brief Field Newline offset 0xffffffff size 0x2
static constexpr uint16_t  Newline{static_cast<uint16_t>(0xffffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27776};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field characters, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Drawing::Text::SDFCharacter>  characters;

/// @brief Field lookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<char16_t,int32_t>*  lookup;

/// @brief Field material, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Text::SDFLookupData, characters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFLookupData, lookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFLookupData, material) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Drawing::Text::SDFLookupData) == 0x20, "Size mismatch!");

} // namespace end def Drawing::Text
