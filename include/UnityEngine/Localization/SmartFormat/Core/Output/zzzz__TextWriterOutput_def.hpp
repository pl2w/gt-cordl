#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Output/TextWriterOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriterOutput)
namespace System::IO {
class TextWriter;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class TextWriterOutput;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*, "UnityEngine.Localization.SmartFormat.Core.Output", "TextWriterOutput");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Output {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Output.TextWriterOutput
class CORDL_TYPE TextWriterOutput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Output)) ::System::IO::TextWriter*  Output;

/// @brief Field <Output>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Output_k__BackingField, put=__cordl_internal_set__Output_k__BackingField)) ::System::IO::TextWriter*  _Output_k__BackingField;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput* New_ctor(::System::IO::TextWriter*  output) ;

/// @brief Method Write, addr 0xb0483f8, size 0x20, virtual true, abstract: false, final true
inline void Write(::StringW  text, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method Write, addr 0xb048418, size 0x44, virtual true, abstract: false, final true
inline void Write(::StringW  text, int32_t  startIndex, int32_t  length, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__Output_k__BackingField() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__Output_k__BackingField() ;

constexpr void __cordl_internal_set__Output_k__BackingField(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0xb0483c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  output) ;

/// [CompilerGenerated]
/// @brief Method get_Output, addr 0xb0483f0, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::TextWriter* get_Output() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* i___UnityEngine__Localization__SmartFormat__Core__Output__IOutput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWriterOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWriterOutput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWriterOutput(TextWriterOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWriterOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWriterOutput(TextWriterOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25233};

/// [CompilerGenerated]
/// @brief Field <Output>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____Output_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput, ____Output_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Output
