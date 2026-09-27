#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/SequentialIDGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SequentialIDGenerator)
namespace UnityEngine::Localization::Tables {
class IKeyGenerator;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class SequentialIDGenerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::SequentialIDGenerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::SequentialIDGenerator*, "UnityEngine.Localization.Tables", "SequentialIDGenerator");
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.SequentialIDGenerator
class CORDL_TYPE SequentialIDGenerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_NextAvailableId)) int64_t  NextAvailableId;

/// @brief Field m_NextAvailableId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NextAvailableId, put=__cordl_internal_set_m_NextAvailableId)) int64_t  m_NextAvailableId;

/// @brief Convert operator to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr operator  ::UnityEngine::Localization::Tables::IKeyGenerator*() noexcept;

/// @brief Method GetNextKey, addr 0xb017ed0, size 0x14, virtual true, abstract: false, final true
inline int64_t GetNextKey() ;

static inline ::UnityEngine::Localization::Tables::SequentialIDGenerator* New_ctor() ;

static inline ::UnityEngine::Localization::Tables::SequentialIDGenerator* New_ctor(int64_t  startingId) ;

constexpr int64_t const& __cordl_internal_get_m_NextAvailableId() const;

constexpr int64_t& __cordl_internal_get_m_NextAvailableId() ;

constexpr void __cordl_internal_set_m_NextAvailableId(int64_t  value) ;

/// @brief Method .ctor, addr 0xb017e90, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb017ea0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int64_t  startingId) ;

/// @brief Method get_NextAvailableId, addr 0xb017e88, size 0x8, virtual false, abstract: false, final false
inline int64_t get_NextAvailableId() ;

/// @brief Convert to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr ::UnityEngine::Localization::Tables::IKeyGenerator* i___UnityEngine__Localization__Tables__IKeyGenerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SequentialIDGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SequentialIDGenerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SequentialIDGenerator(SequentialIDGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SequentialIDGenerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SequentialIDGenerator(SequentialIDGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25079};

/// [SerializeField]
/// @brief Field m_NextAvailableId, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_NextAvailableId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::SequentialIDGenerator, ___m_NextAvailableId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::SequentialIDGenerator) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
