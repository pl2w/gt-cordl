#pragma once
// IWYU pragma private; include "UnityEngine/Networking/MultipartFormDataSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartFormDataSection)
namespace System::Text {
class Encoding;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Forward declare root types
namespace UnityEngine::Networking {
class MultipartFormDataSection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::MultipartFormDataSection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::MultipartFormDataSection*, "UnityEngine.Networking", "MultipartFormDataSection");
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.MultipartFormDataSection
class CORDL_TYPE MultipartFormDataSection : public ::System::Object {
public:
// Declarations
/// @brief Field content, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::StringW  content;

 __declspec(property(get=get_contentType)) ::StringW  contentType;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

 __declspec(property(get=get_fileName)) ::StringW  fileName;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

 __declspec(property(get=get_sectionData)) ::ArrayW<uint8_t>  sectionData;

 __declspec(property(get=get_sectionName)) ::StringW  sectionName;

/// @brief Convert operator to "::UnityEngine::Networking::IMultipartFormSection"
constexpr operator  ::UnityEngine::Networking::IMultipartFormSection*() noexcept;

static inline ::UnityEngine::Networking::MultipartFormDataSection* New_ctor(::StringW  name, ::StringW  data) ;

static inline ::UnityEngine::Networking::MultipartFormDataSection* New_ctor(::StringW  name, ::StringW  data, ::StringW  contentType) ;

static inline ::UnityEngine::Networking::MultipartFormDataSection* New_ctor(::StringW  name, ::StringW  data, ::System::Text::Encoding*  encoding, ::StringW  contentType) ;

constexpr ::StringW const& __cordl_internal_get_content() const;

constexpr ::StringW& __cordl_internal_get_content() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_content(::StringW  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xb928a48, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  data) ;

/// @brief Method .ctor, addr 0xb928a00, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  data, ::StringW  contentType) ;

/// @brief Method .ctor, addr 0xb928888, size 0x178, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  data, ::System::Text::Encoding*  encoding, ::StringW  contentType) ;

/// @brief Method get_contentType, addr 0xb928ad0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_contentType() ;

/// @brief Method get_fileName, addr 0xb928ac8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_fileName() ;

/// @brief Method get_sectionData, addr 0xb928ac0, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> get_sectionData() ;

/// @brief Method get_sectionName, addr 0xb928ab8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_sectionName() ;

/// @brief Convert to "::UnityEngine::Networking::IMultipartFormSection"
constexpr ::UnityEngine::Networking::IMultipartFormSection* i___UnityEngine__Networking__IMultipartFormSection() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultipartFormDataSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipartFormDataSection(MultipartFormDataSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormDataSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipartFormDataSection(MultipartFormDataSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31717};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field content, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::MultipartFormDataSection, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::MultipartFormDataSection, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::MultipartFormDataSection, ___content) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::MultipartFormDataSection) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Networking
