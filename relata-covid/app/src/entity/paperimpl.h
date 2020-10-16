#ifndef PAPERIMPL_H
#define PAPERIMPL_H

#include "src/entity/paper.h"

/**
 * @brief This Class represents the implementation of Paper Entity.
 * 
 */
class PaperImpl : public Paper
{
public:
    /**
     * @brief Construct a new Paper Impl object
     * 
     */
    PaperImpl();
    
     /**
     * @brief Create a paper object
     * 
     * @return Paper* 
     */
    static Paper* create_paper(bool);

    /**
     * @brief Construct a new Paper Impl object
     *
     * @param bool : is_admin
     */
    PaperImpl(bool);
    /**
     * @brief Destroy the Paper Impl object
     * 
     */
    ~PaperImpl();

    /**
     * @brief Get the is admin object
     * 
     * @return true 
     * @return false 
     */
    bool get_is_admin();

    /**
     * @brief Set the is admin object
     * 
     * @param bool
     */
    void set_is_admin(bool);

protected:
    bool is_admin;

};

#endif // PAPERIMPL_H
