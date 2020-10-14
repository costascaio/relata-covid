#ifndef PAPER_H
#define PAPER_H

#endif // PAPER_H

/**
 * @brief This class represents Paper entity.
 * 
 */
class Paper
{
public:
    /**
     * @brief Get the is admin object
     * 
     * @return true 
     * @return false 
     */
    virtual bool get_is_admin() = 0;

    /**
     * @brief Set the is admin object
     * 
     */
    virtual void set_is_admin(bool) = 0;

    /**
     * @brief Destroy the Paper object
     * 
     */
    virtual ~Paper(){}
};
