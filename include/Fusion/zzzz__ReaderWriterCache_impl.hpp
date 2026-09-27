#pragma once
// IWYU pragma private; include "Fusion/ReaderWriterCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ReaderWriterCache_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
inline void Fusion::ReaderWriterCache::setStaticF__readerWriters(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*, "_readerWriters", ::Fusion::ReaderWriterCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>* Fusion::ReaderWriterCache::getStaticF__readerWriters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*, "_readerWriters", ::Fusion::ReaderWriterCache*>();
}
template<typename T>
inline ::Fusion::IElementReaderWriter_1<T>* Fusion::ReaderWriterCache::Get(::System::Type*  readerWriterType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::ReaderWriterCache*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Type*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<T>*>(nullptr, ___internal_method, readerWriterType);
}
// Ctor Parameters []
constexpr ::Fusion::ReaderWriterCache::ReaderWriterCache()   {
}
