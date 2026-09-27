#pragma once
// IWYU pragma private; include "UnityEngine/Networking/MultipartFormFileSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartFormFileSection)
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Forward declare root types
namespace UnityEngine::Networking {
class MultipartFormFileSection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::MultipartFormFileSection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::MultipartFormFileSection*, "UnityEngine.Networking", "MultipartFormFileSection");
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.MultipartFormFileSection
class CORDL_TYPE MultipartFormFileSection : public ::System::Object {
public:
// Declarations
/// @brief Field content, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::StringW  content;

 __declspec(property(get=get_contentType)) ::StringW  contentType;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t>  data;

/// @brief Field file, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_file, put=__cordl_internal_set_file)) ::StringW  file;

 __declspec(property(get=get_fileName)) ::StringW  fileName;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

 __declspec(property(get=get_sectionData)) ::ArrayW<uint8_t>  sectionData;

 __declspec(property(get=get_sectionName)) ::StringW  sectionName;

/// @brief Convert operator to "::UnityEngine::Networking::IMultipartFormSection"
constexpr operator  ::UnityEngine::Networking::IMultipartFormSection*() noexcept;

/// @brief Method Init, addr 0xb928ad8, size 0x60, virtual false, abstract: false, final false
inline void Init(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType) ;

static inline ::UnityEngine::Networking::MultipartFormFileSection* New_ctor(::StringW  fileName, ::ArrayW<uint8_t>  data) ;

static inline ::UnityEngine::Networking::MultipartFormFileSection* New_ctor(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType) ;

constexpr ::StringW const& __cordl_internal_get_content() const;

constexpr ::StringW& __cordl_internal_get_content() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_file() const;

constexpr ::StringW& __cordl_internal_get_file() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_content(::StringW  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_file(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xb928c50, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0xb928b38, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<uint8_t>  data, ::StringW  fileName, ::StringW  contentType) ;

/// @brief Method get_contentType, addr 0xb928c78, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_contentType() ;

/// @brief Method get_fileName, addr 0xb928c70, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_fileName() ;

/// @brief Method get_sectionData, addr 0xb928c68, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> get_sectionData() ;

/// @brief Method get_sectionName, addr 0xb928c60, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_sectionName() ;

/// @brief Convert to "::UnityEngine::Networking::IMultipartFormSection"
constexpr ::UnityEngine::Networking::IMultipartFormSection* i___UnityEngine__Networking__IMultipartFormSection() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultipartFormFileSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormFileSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MultipartFormFileSection(MultipartFormFileSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultipartFormFileSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultipartFormFileSection(MultipartFormFileSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31718};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___data;

/// @brief Field file, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___file;

/// @brief Field content, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::MultipartFormFileSection, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::MultipartFormFileSection, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::MultipartFormFileSection, ___file) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::MultipartFormFileSection, ___content) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::MultipartFormFileSection) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Networking
