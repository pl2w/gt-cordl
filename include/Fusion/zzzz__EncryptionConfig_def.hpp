#pragma once
// IWYU pragma private; include "Fusion/EncryptionConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EncryptionConfig)
// Forward declare root types
namespace Fusion {
class EncryptionConfig;
}
// Write type traits
MARK_REF_T(::Fusion::EncryptionConfig*);
DEFINE_IL2CPP_CLASS(::Fusion::EncryptionConfig*, "Fusion", "EncryptionConfig");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.EncryptionConfig
class CORDL_TYPE EncryptionConfig : public ::System::Object {
public:
// Declarations
/// @brief Field EnableEncryption, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableEncryption, put=__cordl_internal_set_EnableEncryption)) bool  EnableEncryption;

static inline ::Fusion::EncryptionConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_EnableEncryption() const;

constexpr bool& __cordl_internal_get_EnableEncryption() ;

constexpr void __cordl_internal_set_EnableEncryption(bool  value) ;

/// @brief Method .ctor, addr 0x6020610, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncryptionConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncryptionConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptionConfig(EncryptionConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptionConfig(EncryptionConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29310};

/// @brief Field EnableEncryption, offset: 0x10, size: 0x1, def value: None
 bool  ___EnableEncryption;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::EncryptionConfig, ___EnableEncryption) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::EncryptionConfig) == 0x18, "Size mismatch!");

} // namespace end def Fusion
