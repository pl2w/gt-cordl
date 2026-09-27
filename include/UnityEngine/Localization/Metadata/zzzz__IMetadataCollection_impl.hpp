#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/IMetadataCollection.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadataCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::IMetadataCollection.get_MetadataEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* (::UnityEngine::Localization::Metadata::IMetadataCollection::*)()>(&::UnityEngine::Localization::Metadata::IMetadataCollection::get_MetadataEntries)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::IMetadataCollection.AddMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::IMetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::IMetadataCollection::AddMetadata)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::IMetadataCollection.RemoveMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::IMetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::IMetadataCollection::RemoveMetadata)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::IMetadataCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::IMetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::IMetadataCollection::Contains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 6}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* UnityEngine::Localization::Metadata::IMetadataCollection::get_MetadataEntries()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject UnityEngine::Localization::Metadata::IMetadataCollection::GetMetadata()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 1}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline void UnityEngine::Localization::Metadata::IMetadataCollection::GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 2}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundItems);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline ::System::Collections::Generic::IList_1<TObject>* UnityEngine::Localization::Metadata::IMetadataCollection::GetMetadatas()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 3}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TObject>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::IMetadataCollection::AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Metadata::IMetadataCollection::RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Metadata::IMetadataCollection::Contains(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::IMetadataCollection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
