#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_BlendShape2CombinedMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB_BlendShape2CombinedMap)
namespace DigitalOpus::MB::Core {
class SerializableSourceBlendShape2Combined;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_BlendShape2CombinedMap;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap*, "DigitalOpus.MB.Core", "MB_BlendShape2CombinedMap");
// Dependencies UnityEngine.MonoBehaviour
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_BlendShape2CombinedMap
class CORDL_TYPE MB_BlendShape2CombinedMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field srcToCombinedMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcToCombinedMap, put=__cordl_internal_set_srcToCombinedMap)) ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  srcToCombinedMap;

/// @brief Method GetMap, addr 0x9dbd820, size 0x70, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* GetMap() ;

static inline ::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap* New_ctor() ;

constexpr ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined* const& __cordl_internal_get_srcToCombinedMap() const;

constexpr ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*& __cordl_internal_get_srcToCombinedMap() ;

constexpr void __cordl_internal_set_srcToCombinedMap(::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  value) ;

/// @brief Method .ctor, addr 0x9dbd898, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_BlendShape2CombinedMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_BlendShape2CombinedMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_BlendShape2CombinedMap(MB_BlendShape2CombinedMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_BlendShape2CombinedMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_BlendShape2CombinedMap(MB_BlendShape2CombinedMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22735};

/// @brief Field srcToCombinedMap, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::SerializableSourceBlendShape2Combined*  ___srcToCombinedMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap, ___srcToCombinedMap) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_BlendShape2CombinedMap) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
