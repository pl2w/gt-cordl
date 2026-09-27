#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Output/TextWriterOutput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__TextWriterOutput_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Output/zzzz__IOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::*)(::System::IO::TextWriter*)>(&::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb0483c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput.get_Output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::TextWriter* (::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::get_Output)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0483f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"get_Output", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::*)(::StringW, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0483f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::*)(::StringW, int32_t, int32_t, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::Write)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb048418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextWriter*& UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::__cordl_internal_get__Output_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
constexpr ::System::IO::TextWriter* const& UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::__cordl_internal_get__Output_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Output_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::__cordl_internal_set__Output_k__BackingField(::System::IO::TextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Output_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::_ctor(::System::IO::TextWriter*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::System::IO::TextWriter* UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::get_Output()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"get_Output", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::TextWriter*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::Write(::StringW  text, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, formattingInfo);
}
inline void UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::Write(::StringW  text, int32_t  startIndex, int32_t  length, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, startIndex, length, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput* UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::New_ctor(::System::IO::TextWriter*  output)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput*>(output));
}
/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr  UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::operator ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Output::IOutput"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::IOutput* UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::i___UnityEngine__Localization__SmartFormat__Core__Output__IOutput() noexcept {
return static_cast<::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Output::TextWriterOutput::TextWriterOutput()   {
}
